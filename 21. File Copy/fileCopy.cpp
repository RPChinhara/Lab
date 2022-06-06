// Program to copy one file onto the end of another, adding line numbers.

#include <iostream>
using namespace std;

int main()
{
    FILE *fptr1, *fptr2;
    char c;

    fptr1 = (fopen("File.txt", "r"));
    if (fptr1 == NULL)
    {
        cout<<"Cannot open file\n";
        exit(0);
    }
    
    fptr2 = fopen("FileCopy.txt", "w");
    if (fptr2 == NULL)
    {
        cout<<"Cannot open file\n";
        exit(0);
    }

    c = fgetc(fptr1);
    while (c != EOF)
    {
        fputc(c, fptr2);
        c = fgetc(fptr1);
    }

    fclose(fptr1);
    fclose(fptr2);

    return 0;
}