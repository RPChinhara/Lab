// Write a program to read a matrix of size m * n from the keyboard and display the same using functions

#include <iostream>
using namespace std;

void inputMatrix(int **array, int m)
{
    cout << "Enter the elements of the matrix:\n";

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> array[i][j];
        }
    }
}

void displayMatrix(int **array, int m)
{
    cout << "The matrix is:\n";

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int size;

    cout << "Enter the size of the matrix: ";
    cin >> size;

    // Declare a 2D Array dynamically
    int **matrix = new int *[size];
    for (int i = 0; i < size; i++)
    {
        matrix[i] = new int[size];
    }

    inputMatrix(matrix, size);
    displayMatrix(matrix, size);

    return 0;
}