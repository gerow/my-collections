cmake_minimum_required(VERSION 2.6)

set(CMAKE_CXX_FLAGS "-g -DGTEST_USE_OWN_TR1_TUPLE=1 -DGTEST_HAS_TR1_TUPLE=1 -std=c++11 -stdlib=libc++ -Wno-narrowing")

set(CMAKE_***_LINKER_FLAGS -stdlib=libc++)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    -stdlib=libc++
    # Other flags
)

project(mycoll)

add_subdirectory(lib)
add_subdirectory(src)

