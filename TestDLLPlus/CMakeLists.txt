cmake_minimum_required(VERSION 3.16)

project(TestDLLPlus)

# ��������� ���������� �� ������� ����������
set( SOURCE_LIB dllmain.cpp )		

# ��������� �������� ���� �������� ��� �������� ������������ ����������
set ( CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON )

add_library(TestDLLPlus SHARED ${SOURCE_LIB})