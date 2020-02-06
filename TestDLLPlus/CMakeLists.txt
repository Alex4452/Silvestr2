cmake_minimum_required(VERSION 3.16)

# Установка переменной со списком исходников
set( SOURCE_LIB dllmain.cpp )		

# Включение экспорта всех символов для создания динамической библиотеки
set ( CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON )

add_library(TestDLLPlus SHARED ${SOURCE_LIB})