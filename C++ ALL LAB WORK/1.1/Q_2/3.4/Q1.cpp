#include <iostream>
using namespace std;

class Student

{

private:

    string name;

    int rollNumber;

    float gpa;

public:
 
    Student()
    {
        name = "Unknown";

        rollNumber = 0;

        gpa = 0.0;
    }

   
    Student(string n, int r, float g)
    {
        name = n;
        rollNumber = r;
        gpa = g;
    }


    Student(const Student &s)
    {
        name = s.name;

        rollNumber = s.rollNumber;

        gpa = s.gpa;
    }

    string getName()
    {
        return name;
    }

    int getRollNumber()
    {
        return rollNumber;
    }

    float getGPA()
    {
        return gpa;
    }

  
    void display()
    {
        cout << "\nStudent Details:";

        cout << "\nName: " << name;

        cout << "\nRoll Number: " << rollNumber;

        cout << "\nGPA: " << gpa << endl;

    }
};

int main()
{
 
    Student s1;
    cout << "\nDefault Constructor:";
    s1.display();


    Student s2("Parthraj", 19, 9.9);
    cout << "\nParameterized Constructor:";
    s2.display();

 
    Student s3(s2);
    cout << "\nCopy Constructor:";
    s3.display();

    return 0;
}