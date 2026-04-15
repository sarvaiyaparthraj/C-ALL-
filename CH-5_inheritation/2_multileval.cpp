#include <iostream>

using namespace std;

class Student
{

public:
    string name;

    int rollno;

    void GetStudent()
    {
        cout << "Enter student name   : ";

        cin >> name;

        cout << "Enter student Rollno : ";

        cin >> rollno;
    }
};

class Exam
{

public:
    int marks;

    void getmarks()
    {
        cout << "Enter student marks  : ";
        
        cin >> marks;
    }
};

class Result : public Student, public Exam
{
public:
    void display()
    {
        cout << "\nName: " << name << endl;

        cout << "\nRoll No: " << rollno << endl;

        cout << "\nMarks: " << marks << endl;
    }
};

int main()
{

    Result r;

    r.GetStudent();
    r.getmarks();
    r.display();

    return 0;
}