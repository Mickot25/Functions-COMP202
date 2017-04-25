/*
A golfball is dropped from an airplane.
The distance, d, the ball falls in t seconds is given by the formula:

d = (1/2) * gt^2, where g = 9.8 m/s^2 or g = 32 ft/s^2

Using this information, write a C++ program that displays the distance fallen in each 1-sec interval for t seconds
and the total distance the golf ball falls at the end of each interval.

The output should complete the following chart:

Time(sec)	Total distance (ft)	Total distance (m)
0			0.00				0.00
1			16.00				4.90
...			...					...

The program should have the following functions:
Input() - get t (include validation)
Compute() - compute distance (in ft and meters)
Display() - display data

- input validation: t > 0;
- your program should execute for as long as the user wants to continue
- round-off results to 2 decimal places

filename: funcdistance
*/

#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;

void input(int &t)
{
	cout << "Input time to reach the ground: "; cin >> t;

	while (t <= 0)
	{
		cout << "Invalid time! Please try again!" << endl << endl;
		cout << "Input time to reach the ground: "; cin >> t;
	}
}

void compute(double &ft, double &m, int ctr)
{
	ft = 0.5 * 32 * pow(ctr, 2);
	m = 0.5 * 9.8 * pow(ctr, 2);
}

void display(double ft, double m, int ctr)
{
	cout << setw(15) << left << ctr << setw(20) << ft << m << endl;
}

int main()
{
	int t, ctr, choice;
	double ft, m;
	cout << "This program will compute for distance travelled of free falling body." << endl << endl;

	do
	{
		input(t);

		cout << endl;

		cout << setw(15) << left << "Time(t)" << setw(20) << "Distance (ft)" << "Distance (m)" << endl;

		for (ctr = 0; ctr <= t; ctr++)
		{
			compute(ft, m, ctr);
			display(ft, m, ctr);
		}

		cout << endl;
		cout << "Press 1 to repeat the program else other number: "; cin >> choice;
		cout << endl;
	} while (choice == 1);

	_getch();
	return 0;
}