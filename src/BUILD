
# for clangd
# https://github.com/hedronvision/bazel-compile-commands-extractor
# bazel run --cxxopt=-std=c++14 //src:refresh_compile_commands

load("@hedron_compile_commands//:refresh_compile_commands.bzl", "refresh_compile_commands")

refresh_compile_commands(
    name = "refresh_compile_commands",

    # Specify the targets of interest.
    # For example, specify a dict of targets and any flags required to build.
    targets = {
        # "//:my_output_1": "--important_flag1 --important_flag2=true",
        # "//:my_output_2": "",
        "hello_test": "",
    },
    # No need to add flags already in .bazelrc. They're automatically picked up.
    # If you don't need flags, a list of targets is also okay, as is a single target string.
    # Wildcard patterns, like //... for everything, *are* allowed here, just like a build.
    # As are additional targets (+) and subtractions (-), like in bazel query https://docs.bazel.build/versions/main/query.html#expressions
    # And if you're working on a header-only library, specify a test or binary target that compiles it.
)

# sample build #
# bazel build //src:all
# ./bazel-bin/src/main

cc_library(
    name = "hello",
    srcs = ["hello.cpp"],
    hdrs = ["hello.h"],
)

# bazel test --cxxopt=-std=c++14 --test_output=all //src:hello_test

cc_test(
  name = "hello_test",
  # size = "small",
  srcs = ["hello_test.cpp"],
  deps = [
    "@com_google_googletest//:gtest_main",
    ":hello",
    ],
)

cc_binary(
    name = "main",
    srcs = ["main.cpp"],
    deps = [
        ":hello",
    ],
)
