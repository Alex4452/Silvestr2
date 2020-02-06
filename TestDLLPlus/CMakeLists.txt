cmake_minimum_required(VERSION 3.16)

project(TestDLL)

add_library(TestDLL SHARED dllmain.cpp TestDLLPlus.h)