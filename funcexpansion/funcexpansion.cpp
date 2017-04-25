/*
The expansion of a steel bridge as it is heated to a final Celsius temperature, Tf
frmo an initial temperature, To, can be approximated by using this formula:

Increase in length, iL = a * L * (Tf - To)
a - coefficient of expansion of steel which is 11.7 x 10^-6.
L - length of the bridge at temperature, To

Using this formula, write a C++ program that displays a table of expanion for steel bridge
that is L meters longs at an initial temperature, To = 0 to Tf in x-degree increments.

Your program should have the ff functions:
Compute() - get iL
Display() - display results

- input validation: Tf > 0, L > 0, x is from 1 to 5
- your program should execute for as long as the user wants to continue.
- round-off results to 2 decimal places.

filename: funcexpansion
*/

#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;

void compute(double &iL, double L, double To)
{
	iL = (11.7 * pow(10, -6.0)) * L * (To);
}

void display(double temperature, double changeinlength)
{
	cout << setw(15) << left << fixed << setprecision(2) << temperature << scientific << changeinlength << endl;
}

int main()
{
	int choice;
	double iL, L, Tf, To, x;
	cout << "This program will compute for the increase in length of a steel bridge. " << endl << endl;

	do
	{
		cout << "Input initial length of bridge: "; cin >> L;

		while (L <= 0)
		{
			cout << "Invalid initial length of bridge! Please try again." << endl << endl;
			cout << "Input initial length of bridge: "; cin >> L;
		}

		cout << "Input final temperature: "; cin >> Tf;

		while (Tf <= 0)
		{
			cout << "Invalid final temperature! Please try again. " << endl << endl;
			cout << "Input final temperature: "; cin >> Tf;
		}

		cout << "Input increment of temperature increase: "; cin >> x;

		while (x < 1 || x > 5)
		{
			cout << "Increment must be between 1 to 5! Please try again." << endl << endl;
			cout << "Input increment of temperature increase: "; cin >> x;
		}

		cout << endl;
		cout << setw(15) << left << "Temperature" << "Length increase" << endl;
		for (To = 0; To <= Tf; To += x)
		{
			compute(iL, L, To);
			display(To, iL);
		}
		cout << endl;
		cout << "Press 1 to repeat the program, else other number: "; cin >> choice;
		cout << endl;
	} while (choice == 1);

	_getch();
	return 0;
}