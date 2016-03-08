/*
	Albert, Brendan
	CS 150
	March 7, 2016

	IC10_PatternDisplays
*/
#include <iostream>

using namespace std;

int main()
{
	// Pattern A
	for (int row = 1; row <= 10; row++)
	{
		for (int col = 1; col <= row; col++)
		{
			cout << "+";
		}
		cout << endl;
	}

	cout << endl << endl;

	// Pattern B
	for (int row = 1; row <= 10; row++)
	{
		for (int col = 10; col >= row; col--)
		{
			cout << "+";
		}
		cout << endl;
	}

	// Pattern C

	system("pause");
	return 0;
}