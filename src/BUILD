# sample build #
# bazel build //src:all
# ./bazel-bin/src/main

cc_library(
    name = "hello",
    srcs = ["hello.cpp"],
    hdrs = ["hello.h"],
)

cc_binary(
    name = "main",
    srcs = ["main.cpp"],
    deps = [
        ":hello",
    ],
)
