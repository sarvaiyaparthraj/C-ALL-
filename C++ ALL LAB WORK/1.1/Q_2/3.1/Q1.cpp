#include <iostream>
using namespace std;

class student
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
    void setdata(int id, string name, int age, string course, string city, string email, string college)
    {
        stu_id = id;
        stu_name = name;
        stu_age = age;
        stu_course = course;
        stu_city = city;
        stu_email = email;
        stu_college = college;
    }
    void displayData()
    {
        cout << "\nStudent ID: " << stu_id;
        cout << "\nName: " << stu_name;
        cout << "\nAge: " << stu_age;
        cout << "\nCourse: " << stu_course;
        cout << "\nCity: " << stu_city;
        cout << "\nEmail: " << stu_email;
        cout << "\nCollege: " << stu_college << endl;
    }
};
int main()
{

    student S[5];
    for (int i = 0; i < 5; i++)
    {
        int id, age;
        string name, course, city, email, college;

        cout << "\nEnter details of Student" << i + 1 << endl;

        cout << "ID: ";
        cin >> id;

        cout << "Name: ";
        cin >> name;

        cout << "Age: ";
        cin >> age;

        cout << "Course: ";
        cin >> course;

        cout << "City: ";
        cin >> city;

        cout << "Email: ";
        cin >> email;

        cout << "College: ";
        cin >> college;
        S[i].setdata(id, name, age, course, city, email, college);
    }
    cout << "\n--- Student Records ---\n";

    for (int i = 0; i < 5; i++)
    {
        S[i].displayData();
    }
    
            return 0;
}