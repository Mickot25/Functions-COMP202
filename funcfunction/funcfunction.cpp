/*
Write a program that will produce a table of x and y values for the given function

y = 3x^5 - 2x^3 + x; x is between a and b in increments of 0.2
*/
#include <iostream>
#include <conio.h>
using namespace std;

void swapper(int&array1, int&array2)
{
	int temp = array1;
	array1 = array2;
	array2 = temp;
}

void sortEXAM(int sortedEXAM[29], int sizeofarray)
{
	for (int r = 0; r < sizeofarray - 1; r++) //to compare numbers up to the number of arrays
	{
		for (int j = 0; j < sizeofarray - r - 1; j++)
		{
			if (sortedEXAM[j] > sortedEXAM[j + 1])
				swapper(sortedEXAM[j], sortedEXAM[j + 1]);
		}
	}
}

int main()
{
	int mode, modecount2, modecount1;
	bool is_nomode = false;
	int numbers[30] = { 15,43,25,25,25,25,16,14,93,93,58,14,55,55,55,64,14,43,14,25,15,56,78,13,15,29,14,14,16,100 };
	sortEXAM(numbers, 30);

	mode = numbers[0];
	modecount1 = 0;
	modecount2 = 1; //Any number exists at least once!
	for (int i = 1; i < 30; ++i)
	{
		if (numbers[i] == numbers[i - 1])
			++modecount2;

		else
		{
			if (modecount2 > modecount1)
			{
				mode = numbers[i - 1];
				modecount1 = modecount2;
			}
			else if (i != 1 && modecount2 == modecount1)
			{
				std::cout << "No mode!\n"; is_nomode = true;
				break;
			}
			modecount2 = 1;
		}
	}
	if (!is_nomode) std::cout << "Mode of these numbers is: " << mode << std::endl;

	_getch();
	return 0;
}