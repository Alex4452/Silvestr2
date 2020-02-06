cmake_minimum_required(VERSION 3.16)

project(main)

add_executable(main cart/cart.cpp)

add_subdirectory(TestDLLPlus)

target_link_libraries(main TestDLL)

install(TARGETS main)

enable_testing()
add_test(NAME main COMMAND main)