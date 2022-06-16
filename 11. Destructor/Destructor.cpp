// Program to demonstrate the concept of destructor

#include <iostream>
using namespace std;

class Point
{
private:
    int x, y;

public:
    // Constructor
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    ~Point()
    {
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
    }
};

int main()
{
    Point p(1, 3);
    return 0;
}