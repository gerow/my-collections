include_directories(${mycoll_SOURCE_DIR}/lib/gtest/include)

add_executable(test_all test_all.cc test_vector.cc)

target_link_libraries(test_all gtest)

add_test(TestAll test_all)
