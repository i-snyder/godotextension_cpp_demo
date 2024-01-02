import os
from SCons.Util import WhereIs


def exists(env):
    return WhereIs("emcc") is not None


def generate(env):
    if env["arch"] not in ("wasm32"):
        print("Only wasm32 supported on web. Exiting.")
        env.Exit(1)

    # Emscripten toolchain
    env["CC"] = "emcc"
    env["CXX"] = "em++"
    env["AR"] = "emar"
    env["RANLIB"] = "emranlib"

    # Use TempFileMunge since some AR invocations are too long for cmd.exe.
    # Use POSIX-style paths, required with TempFileMunge.
    env["ARCOM_POSIX"] = env["ARCOM"].replace("$TARGET", "$TARGET.posix").replace("$SOURCES", "$SOURCES.posix")
    env["ARCOM"] = "${TEMPFILE(ARCOM_POSIX)}"

    # All intermediate files are just object files.
    env["OBJSUFFIX"] = ".o"
    env["SHOBJSUFFIX"] = ".o"

    # Static libraries clang-style.
    env["LIBPREFIX"] = "lib"
    env["LIBSUFFIX"] = ".a"

    # Shared library as wasm.
    env["SHLIBSUFFIX"] = ".wasm"

    # Thread support (via SharedArrayBuffer).
    env.Append(CCFLAGS=["-s", "USE_PTHREADS=1"])
    env.Append(LINKFLAGS=["-s", "USE_PTHREADS=1"])

    # Build as side module (shared library).
    env.Append(CPPFLAGS=["-s", "SIDE_MODULE=1"])
    env.Append(LINKFLAGS=["-s", "SIDE_MODULE=1"])

    env.Append(CPPDEFINES=["WEB_ENABLED", "UNIX_ENABLED"])
