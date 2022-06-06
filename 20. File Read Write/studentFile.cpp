// Program to read the name and roll number of students from keyboard and write them into a file and then display it.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int marks, no_of_students;
    
    cout<<"Enter the number of students: ";
    cin>>no_of_students;

    FILE *fptr;
    fptr = (fopen("student.txt", "w"));

    if(fptr == NULL)
    {
        cout<<"Error";
        exit(1);
    }

    for (int i = 0; i < no_of_students; i++)
    {
        cout<<"For student "<<i+1<<"\nEnter name: ";
        cin>>name;
        cout<<"\nEnter marks: ";
        cin>>marks;
        fprintf(fptr, "\nName: %s \nMarks=%d \n", name, marks);
    }

    fclose(fptr);
    return 0;
}