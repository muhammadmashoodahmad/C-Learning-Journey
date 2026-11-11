#include<iostream>
using namespace std;

class Shape
{
	public:
		virtual double calculateArea() = 0;
};

class Rectangle : public Shape
{
	private:
		double length, width;

	public:
		Rectangle(double l, double w)
		{
			length = l;
			width = w;
		}

		double calculateArea()
		{
			return length * width;
		}
};

class Circle : public Shape
{
	private:
		double radius;

	public:
		Circle(double r)
		{
			radius = r;
		}

		double calculateArea()
		{
			return 3.14159 * radius * radius;
		}
};

int main()
{
	Rectangle r1(5, 4);
	Circle c1(3);

	Shape *ptr;

	ptr = &r1;
	cout << "Rectangle Area: " << ptr->calculateArea() << endl;

	ptr = &c1;
	cout << "Circle Area: " << ptr->calculateArea() << endl;

	return 0;
}
