//Array[20] generate random number from 30-50. tapos i sort tapos ipakita yung lowest na nonrepeating.
//Display yung unsorted at sorted

#include <iostream>
#include <conio.h>
#include <time.h>
using namespace std;

void swap(int&array1, int&array2)
{
	int temp;
	temp = array1;
	array1 = array2;
	array2 = temp;
}

int main()
{
	int arr[20], sortarr[20];
	int lowest = 0; //in progress

	srand(time(NULL));

	for (int r = 0; r < 20; r++)
	{
		arr[r] = 30 + rand() % 21;
		sortarr[r] = arr[r]; //copy arr to sortarr
	}

	cout << "Unsorted: " << endl; //Display arr
	for (int r = 0; r < 20; r++)
		cout << arr[r] << " ";
	
	cout << endl << endl;

	for (int r = 0; r < 19; r++)
	{
		for (int j = 0; j < 20 - r - 1; j++)
		{
			if (sortarr[j] > sortarr[j + 1])
				swap(sortarr[j], sortarr[j + 1]);
		}
	}

	cout << "Sorted: " << endl; //Display sortarr
	for (int r = 0; r < 20; r++)
		cout << sortarr[r] << " ";

	cout << endl << endl;

	for (int r = 19; r >= 0; r--)
	{
		if (sortarr[r] != sortarr[r - 1] && sortarr[r - 1] != sortarr[r - 2])
			lowest = sortarr[r-1];
	}

	cout << "Lowest nonrepeating number: " << lowest << endl; //still in progress at this stage

	_getch();
	return 0;
}