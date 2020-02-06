// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the TESTDLLPLUS_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// TESTDLLPLUS_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef TESTDLLPLUS_EXPORTS
#define TESTDLLPLUS_API __declspec(dllexport)
#else
#define TESTDLLPLUS_API __declspec(dllimport)
#endif

#include <iostream>

using namespace std;


TESTDLLPLUS_API int testPlus(int& a, int& b);
TESTDLLPLUS_API int testSub(int& a, int& b);
