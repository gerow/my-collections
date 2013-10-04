find_package(Boost)

include_directories(include)
link_directories(${mycoll_BINARY_DIR})

add_subdirectory(test)

