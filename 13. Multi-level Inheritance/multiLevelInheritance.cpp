// Program to show Multi-Level Inheritance

#include <iostream>
using namespace std;

class A 
{
public:
    void FunctionA()
    {
        cout<<"This is in class A";
    }
};

// Derived class (child)
class Child: public A 
{

};

// Derived class (grandchild)
class GrandChild: public Child 
{
};

int main() 
{
    GrandChild myObj;
    myObj.FunctionA();
    return 0;
}