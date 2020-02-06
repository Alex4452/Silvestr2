cmake_minimum_required(VERSION 3.16)

project(main)

include_directories(${PROJECT_SOURCE_DIR}/cart)
include_directories(${PROJECT_SOURCE_DIR}/TestDLLPlus)

# Добавление подпоекта с скомпилированной библиотекой
#add_subdirectory(${PROJECT_SOURCE_DIR}/TestDLLPlus/build bin/TestDLLPlus.lib)

set (HEADERS
			${PROJECT_SOURCE_DIR}/TestDLLPlus/TestDLLPlus.h )
set (SOURCES
			${PROJECT_SOURCE_DIR}/cart/cart.cpp)

# Сборка исходного файла
add_executable(main ${HEADERS} ${SOURCES})

# Загрузка DLL
#target_link_libraries(main TestDLLPlus)

install(TARGETS main)

enable_testing()
add_test(NAME main COMMAND main)