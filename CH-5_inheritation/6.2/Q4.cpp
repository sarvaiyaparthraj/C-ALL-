#include <iostream>

using namespace std;


class X

{

public:

    void display()
    {
        cout << "This is X class" << endl;
    }
};


class Y

{
public:

    void display()
    
    {
        cout << "This is Y class" << endl;
    }
};

class Z : public X, public Y
{

};

int main()
{
    Z obj;

    obj.X::display();
    obj.Y::display();

    return 0;
}