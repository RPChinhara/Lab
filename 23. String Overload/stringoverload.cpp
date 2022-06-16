#include <iostream>
#include <string>
using namespace std;

class Cuh
{
public:
    string str;
    Cuh()
    {
        str = "";
    }
    Cuh(string st)
    {
        str = st;
    }

    Cuh operator*(const int &num)
    {
        Cuh temp;
        for (int i = 0; i < num; i++)
        {
            temp.str.append(this->str);
        }

        return temp;
    }

    void display()
    {
        cout << str << endl;
    }
};

int main(void)
{
    Cuh st("CUH");
    Cuh t;
    t = st * 3;
    t.display();

    return 0;
}