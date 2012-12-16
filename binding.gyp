{
    "targets": [
        {
            "target_name": "webgl",
            "sources": [
                "src/object.cc",
                "src/renderer.cc",
                "src/init.cc",
            ],
            "include_dirs": [
                "/opt/vc/include",
                "/opt/vc/include/interface/vcos/pthreads",
            ],
            "ldflags": [
                "-L/opt/vc/lib",
            ],
            "libraries": [
                "-lGLESv2",
                "-ldg",
            ],
        }
    ]
}
