cmake_minimum_required(VERSION 3.14)

project(stack LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


include_directories(include)


add_executable(main src/main.cpp)
target_link_libraries(main stack)


enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})


add_executable(tests tests/test_stack.cpp)
target_link_libraries(tests stack ${GTEST_LIBRARIES} pthread)


add_test(NAME stackTests COMMAND tests)


add_custom_target(run_tests ALL
    COMMAND ${CMAKE_COMMAND} -E echo "Запуск тестов..."
    COMMAND ctest
    DEPENDS tests
)












