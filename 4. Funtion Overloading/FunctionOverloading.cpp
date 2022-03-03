// Program to show that the effect of default arguments can be alternatively achieved by overloading. 

#include <iostream>
using namespace std;

class Power
{
public:
    Power(int m)
    {
        const int n = 2;
        double result = calcPower(m, n);
        display(result);
    }

    Power(int m, int n)
    {
        double result = calcPower(m, n);
        display(result);
    }

    double calcPower(int m, int n)
    {
        double result=1;
        for (int i = 1; i <= n; i++)
        {
            result *= m;
        }

        return result;        
    }

    void display(double num)
    {
        cout<<"The result is: "<<num<<endl;
    }
};

int main()
{
    Power(3, 4);

    return 0;
}
