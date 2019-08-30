//David Fox Week 1 Assignment
//8/28/2019
//Perimeter and area calculator

#include <iostream>
using namespace std;

int main()
{
	//declare variables;
	double length, height, area, perimeter;

	//ask for length and height of rectangle
	cout << "Please enter the length of the rectangle: ";
	cin >> length;
	cout << "Please enter the height of the rectangle: ";
	cin >> height;

	//calculate area and height
	area = length * height;
	perimeter = 2 * (length + height);

	//display area and height
	cout << "The area of the rectangle is: " << area << endl;
	cout << "The perimeter of the rectangle is: " << perimeter << endl;
	
	system("pause");
	return 0;
}