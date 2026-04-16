#include <iostream>

using namespace std;

class Teacher
{
public:

    void Teaching()

    {
        cout << "My teacher is teaching" << endl;
    }
};

class Coach

{
public:

    void Training()
    {
        cout << "My coach is training players" << endl;
    }
};

class Student : public Teacher, public Coach

{

};

int main()

{
    Student s;

    s.Teaching();
    s.Training();

    return 0;
}