#include <iostream>
using namespace std;

class Time1;
class Time2
{
    int minutes;
    friend class Time1;

public:
    Time2(int min = 0)
    {
        minutes = min;
    }

    Time2(Time1);

    void showtime(void)
    {
        cout << "M : " << minutes<<endl;
    }
};
class Time1
{
    int hours;
    int minutes;
    friend class Time2;

public:
    Time1(int hr = 0, int min = 0)
    {
        hours = hr;
        minutes = min;
    }
    Time1(Time2 t)
    {
        hours = t.minutes / 60;
        minutes = t.minutes % 60;
    }
    void showtime(void)
    {
        cout << "H : " << hours << " M : " << minutes<<endl;
    }
};

Time2::Time2(Time1 t)
{
    minutes = t.hours * 60 + t.minutes;
}

int main(void)
{
    Time1 t1;
    Time2 t2(65);
    t1 = t2;
    t2 = t1;
    t1.showtime();
    t2.showtime();

    return 0;
}