/*
    Write a class STRING that can be used to store strings, add strings, equate string, output string
*/

#include <iostream>
using namespace std;

class String
{
private:
    char str[50];
    int size;

public:
    int calSize(char arr[])
    {
        int length = 0;

        for (int i = 0; arr[i] != '\0'; i++)
        {
            ++length;
        }

        return length;
    }

    void store(char arr[])
    {
        size = calSize(arr);

        for (int i = 0; i < size; i++)
        {
            str[i] = arr[i];
        }
    }

    void add(char arr1[], char arr2[])
    {
        int len1 = calSize(arr1);
        int len2 = calSize(arr2);

        store(arr1);

        for (int i = 0; i <= len2; i++)
        {
            str[len1 + i] = arr2[i];
        }

        output(str);
    }

    void equate(char arr1[], char arr2[])
    {
        size = calSize(arr1);
        int flag = 0;

        for (int i = 0; i < size; i++)
        {
            if (arr1[i] != arr2[i])
            {
                cout << "The strings are not equal\n";
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "The strings are equal\n";
        }
    }

    void output(char arr[])
    {
        size = calSize(arr);

        for (int i = 0; i < size; i++)
        {
            cout << arr[i];
        }
        cout << endl;
    }
};

int main()
{
    String obj;
    char str1[] = "Hello";
    char str2[] = "World";
    char str3[] = "Hello";

    obj.add(str1, str2);
    obj.equate(str1, str2);
    obj.equate(str1, str3);

    return 0;
}