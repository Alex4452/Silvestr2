cmake_minimum_required(VERSION 3.16)

project(main)

# Компиляция исходного файла
add_executable(main cart/cart.cpp)

# Добавление заголовка тестовой библиотеки
target_sources(main TestDLLPlus/TestDLLPlus.h)

# Добавление подпоекта с скомпилированной библиотекой
add_subdirectory(TestDLLPlus)

# Загрузка DLL
target_link_libraries(main TestDLL)

install(TARGETS main)

enable_testing()
add_test(NAME main COMMAND main)