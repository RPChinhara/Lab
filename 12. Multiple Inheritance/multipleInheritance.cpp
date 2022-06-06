// Program to show multiple inheritance

#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout<<"Constructor of A\n";
    }
};

class B
{
public:
    B()  
    { 
        cout<<"Constructor of B\n"; 
    }
};

class C: public B, public A
{
public:
    C()  
    { 
        cout << "Constructor of C\n"; 
    }
};
  
int main()
{
    C c;
    return 0;
}