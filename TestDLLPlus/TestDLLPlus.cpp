// TestDLLPlus.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "TestDLLPlus.h"


TESTDLLPLUS_API int testPlus(int& a, int& b)
{
	return (a + b);
}

int testSub(int & a, int & b)
{
	return (a - b);
}

