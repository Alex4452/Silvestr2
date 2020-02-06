cmake_minimum_required(VERSION 3.16)

project(main)

include_directories(cart)
include_directories(TestDLLPlus)

# Добавление подпоекта с скомпилированной библиотекой
#add_subdirectory(${PROJECT_SOURCE_DIR}/TestDLLPlus/build bin/TestDLLPlus.lib)

# Сборка исходного файла
add_executable(main ${SOURCE_FILES} 
	TestDLLPlus/TestDLLPlus.h cart/cart.cpp)

# Загрузка DLL
#target_link_libraries(main TestDLLPlus)

#install(TARGETS main)

#enable_testing()
#add_test(NAME main COMMAND main)