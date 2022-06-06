// Write a program to create an abstract class named shape that contains an empty method named number of Slides (). Provide three classes named Trapezoid, Triangles and Hexagon such that each one of the classes inherits the class Shape. Each one of the classes contains only the method number of Slides () that show the number of sides in the given geometrical figures.

#include <iostream>
using namespace std;

class Shape
{
public:
    virtual int no_of_sides() = 0;
};

class Trapezoid : public Shape
{
public:
    int no_of_sides()
    {
        return 4;
    }
};

class Triangles : public Shape
{
public:
    int no_of_sides()
    {
        return 3;
    } 
};

class Hexagon : public Shape
{
public:
    int no_of_sides()
    {
        return 6;
    } 
};

int main()
{
    Triangles triangle;
    Trapezoid trapezoid;
    Hexagon hexagon;

    cout<<"Number of sides of a triangle: "<<triangle.no_of_sides()<<endl;
    cout<<"Number of sides of a trapezoid: "<<trapezoid.no_of_sides()<<endl;
    cout<<"Number of sides of a hexagon: "<<hexagon.no_of_sides()<<endl;

    return 0;
}