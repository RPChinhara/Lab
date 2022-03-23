// Write a class TIME to store time in hours and minutes. Write a friend function to add two TIME objects.

#include <iostream>
using namespace std;

class Time
{
private:
    int hours, minutes; 

public:
    void input(int h, int min)
    {
        hours = h;
        minutes = min;
    }

    friend Time Add(Time, Time);

    void display()
    {
        cout<<"Time: "<<hours<<":"<<minutes<<endl;
    }
};

Time Add(Time obj1, Time obj2)
{
    Time obj3;
    obj3.hours = obj1.hours + obj2.hours;
    obj3.minutes = obj1.minutes + obj2.minutes;

    return obj3;
}

int main()
{
    Time t1, t2, t3;

    t1.input(10, 36);
    t2.input(3, 13);
    t3 = Add(t1, t2);

    t3.display();

    return 0;
}
