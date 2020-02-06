cmake_minimum_required(VERSION 3.16)

project(main)

include_directories(${PROJECT_SOURCE_DIR}/cart)
include_directories(${PROJECT_SOURCE_DIR}/TestDLLPlus)

# Компиляция исходного файла
add_executable(main ${SOURCE_FILES} 
	TestDLLPlus/TestDLLPlus.h cart/cart.cpp)

# Добавление подпоекта с скомпилированной библиотекой
add_subdirectory(TestDLLPlus)

find_path(SIFTGPU_INCLUDE_DIR TestDLLPlus.h)
find_library(SIFTGPU_LIBRARY TestDLLPlus)

if (SIFTGPU_INCLUDE_DIR AND SIFTGPU_LIBRARY)
    # you may need that if further action in your CMakeLists.txt depends
    # on detecting your library
    set(SIFTGPU_FOUND TRUE)

    # you may need that if you want to conditionally compile some parts
    # of your code depending on library availability
    add_definitions(-DHAVE_LIBSIFTGPU=1)

    # those two, you really need
    include_directories(${SIFTGPU_INCLUDE_DIR})
    set(YOUR_LIBRARIES ${YOUR_LIBRARIES} ${SIFTGPU_LIBRARY})
endif ()

# Загрузка DLL
target_link_libraries(main ${YOUR_LIBRARIES})

install(TARGETS main)

enable_testing()
add_test(NAME main COMMAND main)