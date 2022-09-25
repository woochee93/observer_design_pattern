cmake_minimum_required(VERSION 3.0)
project(testowanko)
add_executable(apka main.cpp )



add_executable(testy  tests.cpp src/Elevator.cpp )

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

target_link_libraries(
  testy
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(testy)
