cc_library( 
	 name = "QuadraticHwLibrary",
    srcs = [
        "QuadraticHwLibrary.cpp",
    ],
    hdrs = [
        "QuadraticHwHeader.h",
    ],
)

cc_binary(
    name = "QuadraticHw",
    srcs = [
        "QuadraticHw.cpp",
    ],
    deps = [
        ":QuadraticHwLibrary",
    ],
)