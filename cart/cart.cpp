#include "pch.h"
#include <iostream>
#include "..\TestDLLPlus\TestDLLPlus.h"
using namespace std;

int main(int argc, char* argv[])
{
	int s = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 3; j > 0; j--)
		{
			s += i + j;
		}
	}

	int a = 1;
	int b = 3;
	int c = testPlus(a, b);
	int d = testSub(a, b);

	cout << c << endl;
	cout << d << endl;
	cout << s << endl;
	return 0;
}
