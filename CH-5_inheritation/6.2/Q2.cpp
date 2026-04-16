#include <iostream>
using namespace std;

class Work1
{
public:
    string task1 = "Coding Work";

    void call1()
    {
        cout << "Create a " << task1 << endl;
    }
};

class Work2 : public Work1
{
public:
    string task2 = "Ahmedabad";

    void call2()
    {
        cout << "I am going to " << task2 << endl;
    }
};

class FinalWork : public Work1
{
};

int main()
{
    Work1 w1;
    Work2 w2;

    w1.call1();
    w2.call2();

    return 0;
}