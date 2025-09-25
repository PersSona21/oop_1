include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.15.2.zip
    DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)
FetchContent_MakeAvailable(googletest)

add_executable(extructNumbers_tests test_extructNumbers.cpp ../src/extruct.cpp)
target_include_directories(extructNumbers_tests PUBLIC ../include)
target_link_libraries(extructNumbers_tests gtest_main)

include(GoogleTest)
gtest_discover_tests(extructNumbers_tests)
