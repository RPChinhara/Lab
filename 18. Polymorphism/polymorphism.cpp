// Program to show run time polymorphism using virtual function

#include <iostream>
using namespace std;

class Shape 
{
public:
	virtual void calculate()
	{
		cout<<"Area of your Shape ";
	}
};

class Rectangle : public Shape 
{
public:
	int width, height, area;

	void calculate()
	{
		cout<<"Enter Width of Rectangle: ";
		cin>>width;

		cout<<"Enter Height of Rectangle: ";
		cin>>height;

		area = height * width;
		cout << "Area of Rectangle: " << area << "\n";
	}
};

class Square : public Shape {
public:
	int side, area;

	void calculate()
	{
		cout << "Enter one side your of Square: ";
		cin >> side;

		area = side * side;
		cout << "Area of Square: " << area;
	}
};

int main()
{	
    Rectangle r;
	r.calculate();
	
    Square sq;
	sq.calculate();

	return 0;
}
