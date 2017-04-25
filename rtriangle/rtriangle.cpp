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

void hyp(double side1, double side2, double &hypotenuse)
{
	hypotenuse = sqrt(pow(side1, 2) + pow(side2, 2));
}

void area(double side1, double side2, double &thearea)
{
	thearea = 0.5 * side1 * side2;
}

void display(double hyp, double area)
{
	cout << "Length of hypotenuse = " << hyp << endl;
	cout << "Area = " << area << endl;
}

int main()
{
	double x, y, hypotenuse, thearea;
	cout << "This program will compute for the length of hypotenuse"<<endl<<"and area of a right triangle." << endl << endl;

	cout << "Input first side of the right triangle: "; cin >> x;
	cout << "Input second side of the right triangle: "; cin >> y;
	cout << endl;

	hyp(x, y, hypotenuse);
	area(x, y, thearea);
	display(hypotenuse, thearea);

	_getch();
	return 0;
}