cmake_minimum_required(VERSION 3.16)

project(main)

include_directories(${PROJECT_SOURCE_DIR}/cart)
include_directories(${PROJECT_SOURCE_DIR}/TestDLLPlus)

# ���������� ��������� �����
add_executable(main ${SOURCE_FILES} 
	TestDLLPlus/TestDLLPlus.h cart/cart.cpp)

# ���������� ��������� � ���������������� �����������
add_subdirectory(TestDLLPlus)

# �������� DLL
target_link_libraries(main TestDLLPlus)

install(TARGETS main)

#enable_testing()
#add_test(NAME main COMMAND main) 