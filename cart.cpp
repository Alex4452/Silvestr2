#include <iostream>
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
