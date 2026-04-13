#include <iostream>
#include <vector>
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
        name = "";
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

    string getName() const 
    { 
        return name;
     }

    int getRollNumber() const 
    {
         return rollNumber;
     }

    float getGPA() const
     { 
        return gpa; 
    }

    void display() const
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "GPA: " << gpa << endl;
        cout << "-------------------------" << endl;
    }
};

class StudentRecordManager
{
private:
    vector<Student> students;

public:
    void addStudent(const Student &s)
    {
        students.push_back(s);
    }
                       
    void displayAll() const
    {
        if (students.empty())
        {
            cout << "No records found!" << endl;
            return;
        }

        for (const Student &s : students)
        {
            s.display();
        }
    }

    void searchStudent(int roll) const
    {
        for (const Student &s : students)
        {
            if (s.getRollNumber() == roll)
            {
                cout << "Student Found:" << endl;
                s.display();
                return;
            }
        }
        cout << "Student not found!" << endl;
    }
};


int main()
{
    StudentRecordManager manager;

    Student s1("parthrajsinh", 101, 9.5);

    Student s2("gnandipsinh", 102, 9.8);

    Student s3 = s1;

    manager.addStudent(s1);

    manager.addStudent(s2);

    manager.addStudent(s3);

    cout << "\nAll Students:\n";

    manager.displayAll();

    cout << "\nSearch Result:\n";
    
    manager.searchStudent(101);

    return 0;
}