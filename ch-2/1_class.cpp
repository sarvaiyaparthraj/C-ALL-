#include <iostream>
using namespace std;

class student
{

public:
    string name;
    string id;
    string Number;



    void studentDetaills(string n, string i, string N)

    {
        name = n;
        id = i;
       Number = N;
    }

    void displayStudentInfo()

    {
        cout << "student name is " << name << endl;
        cout << "student course is " << id << endl;
        cout << "student grade is " << Number << endl;
    }
};

int main()

{

    student s1;

    s1.studentDetaills("parthraj" ,"P10448","1");

    s1.displayStudentInfo();

    return 0;
}