// ClassAssmt215.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
	string color = "blue";
	void getArea() {
		cout << "The area of the ";
	}
};

class Rectangle : public Shape {
public:
	double height;
	double width;
	void getArea() {
		cout << "Rectangle is:\n";
		cout << height * width << "\n";
	}
};

class Triangle : public Shape {
public:
	double base;
	double height;
	void getArea() {
		cout << "Triangle is:\n";
		cout << 0.5*(height * base) << "\n";
	}
};

class Circle : public Shape {
public:
	double radius;
	void getArea() {
		cout << "Circle is:\n";
		cout << 3.14 * pow(radius,2) << "\n";
	}
};

int main()
{
	Shape newShape;
	Rectangle newRect;
	Triangle newTriAng;
	Circle newCircle;

	newRect.height = 4;
	newRect.width = 5;

	newTriAng.base = 3;
	newTriAng.height = 5;

	newCircle.radius = 3;

	cout << "The color of the Rectangle is: " << newRect.color << "\n";
	cout << "The color of the Triangle is: " << newTriAng.color << "\n";
	cout << "The color of the Circle is: " << newCircle.color << "\n";

	newShape.getArea();
	newRect.getArea();

	newShape.getArea();
	newTriAng.getArea();

	newShape.getArea();
	newCircle.getArea();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
