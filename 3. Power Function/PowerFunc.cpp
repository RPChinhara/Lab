/*
Write a function power() which raises a number m to a power n. The function takes double value of m and 
integer value of n and returns the result. Use a default value of n is 2 to make the function to calculate
squares when this argument is omitted.
*/

#include <iostream>
using namespace std;

class Math
{
public:
    double power(double m, int n=2)
    {
        int product=1;
        for (int i = 0; i < n; i++)
        {
            product = product * m;
        }

        return product;        
    }
};

int main()
{
    double num1, result;
    int num2;

    cout<<"Enter any real number as base and an integer as the power you want it to calculate: ";
    cin>>num1>>num2;

    Math object;

    result = object.power(num1, num2);
    cout<<"The calculated result is: "<<result<<endl;

    return 0;
}