cmake_minimum_required(VERSION 3.8)

project("Foxhole-Socket-Client")

include_directories("D:/Programs/Windows/Developer_Tools/emsdk/upstream/emscripten/cache/sysroot/include/")

add_executable("Foxhole-Socket-Client" "Main.cpp")

set_target_properties("Foxhole-Socket-Client" PROPERTIES LINK_FLAGS "-s STANDALONE_WASM")