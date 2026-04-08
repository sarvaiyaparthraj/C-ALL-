
#include <iostream>
using namespace std;

class Student
{
private:
    int stu_id;

    string stu_name;

    int stu_age;

    string stu_course;

    string stu_city;

    string stu_email;

    string stu_college;

public:
   
    void setData()
    {
        cout << "\nEnter Student ID: ";
        cin >> stu_id;

        cout << "Enter Student Name: ";
        cin >> stu_name;

        cout << "Enter Age: ";
        cin >> stu_age;

        cout << "Enter Course: ";
        cin >> stu_course;

        cout << "Enter City: ";
        cin >> stu_city;

        cout << "Enter Email: ";
        cin >> stu_email;

        cout << "Enter College Name: ";
        cin >> stu_college;
    }

    void getData()
    {
        cout << "\n----- Student Details -----\n";

        cout << "ID: "        << stu_id << endl;

        cout << "Name: "      << stu_name << endl;

        cout << "Age: "       << stu_age << endl;
 
        cout << "Course: "    << stu_course << endl;

        cout << "City: "      << stu_city << endl;

        cout << "Email: "     << stu_email << endl;
        
        cout << "College: "   << stu_college << endl;
    }
};

int main()
{
    int n;

    cout << "Enter number  students: ";
    cin >> n;

    Student s[n]; 

    
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details  Student " << i + 1 << endl;
        s[i].setData();
    }


    for (int i = 0; i < n; i++)
    {
        s[i].getData();
    }

    return 0;
}