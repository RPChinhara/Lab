// Program to show hybrid inheritance

#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout<<"This is constructor A\n";
    }
};

class B: public A
{
public:
    B()
    {
        cout<<"This is constructor B\n";
    }    
};

class C
{
public:
    void display()
    {
        cout<<"This is member function of C\n";
    }
};

class D: public B, public C
{
public:
    D()
    {
        cout<<"Hybrid class D\n";
    }
};

int main()
{
    D d;
    d.display();

    return 0;
}
