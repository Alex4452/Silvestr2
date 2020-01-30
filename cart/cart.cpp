#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <set>
#include <iterator>
#include <unordered_set>
#include <sstream>
#include <fstream>
#include <map>
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
	cout << s << endl;
	return 0;
}
