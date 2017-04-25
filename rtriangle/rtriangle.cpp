/*
User will input the two sides of the triangle.
Compute and display the area and hypotenuse of a triangle.

functions:
hyp()
area()
display()

filename: rtriangle
*/

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

double hyp(double side1, double side2)
{
	double hyp;
	hyp = sqrt(pow(side1, 2) + pow(side2, 2));
	return hyp;
}

double area(double side1, double side2)
{
	double area;
	area = 0.5 * side1 * side2;
	return area;
}

void display(double hyp, double area)
{
	cout << "Length of hypotenuse = " << hyp << endl;
	cout << "Area = " << area << endl;
}

int main()
{
	double x, y, a, h;
	cout << "This program will compute for the length of hypotenuse"<<endl<<"and area of a right triangle." << endl << endl;

	cout << "Input first side of the right triangle: "; cin >> x;
	cout << "Input second side of the right triangle: "; cin >> y;
	cout << endl;

	h = hyp(x, y);
	a = area(x, y);
	display(h, a);

	_getch();
	return 0;
}