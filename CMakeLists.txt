cmake_minimum_required(VERSION 3.16)

project(main)

include_directories(${PROJECT_SOURCE_DIR}/cart)
include_directories(${PROJECT_SOURCE_DIR}/TestDLLPlus)


# Установка переменной со списком исходников
set( SOURCE_LIB TestDLLPlus/dllmain.cpp )		

# Включение экспорта всех символов для создания динамической библиотеки
set ( CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON )

add_library(TestDLL SHARED ${SOURCE_LIB})

target_link_libraries(main TestDLL)

# Сборка исходного файла
add_executable(main ${SOURCE_FILES} 
	TestDLLPlus/TestDLLPlus.h cart/cart.cpp)

# Добавление подпоекта с скомпилированной библиотекой
#add_subdirectory(TestDLLPlus)

# Загрузка DLL
#target_link_libraries(main TestDLLPlus)

install(TARGETS main)

enable_testing()
add_test(NAME main COMMAND main)