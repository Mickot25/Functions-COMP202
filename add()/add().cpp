/*
C++ program to add two integers. Make a function add() to add integers and display sum in main() function.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int add(int a, int b)
{
	int add;
	add = a + b;
	return add;
}

int main()
{
	int num1, num2, sum;
	cout << "Input two integers: "; cin >> num1 >> num2;
	sum = add(num1, num2);

	cout << "Sum = " << sum << endl;
	
	_getch();
	return 0;
}

