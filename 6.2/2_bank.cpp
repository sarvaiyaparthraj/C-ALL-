#include <iostream>
using namespace std;

class Bank
{

    public:

    virtual void show(){

        cout<<"one number"<<endl;
    }
    
};

class upi:public Bank{


    public :

    void show(){

        cout<<"tow number"<<endl;
    }
};

class Card:public Bank{

    public :

    void show(){

        cout<<"three number"<<endl;
    }
};

int main()

{

    Bank *obj;

    Bank b;

    upi u;

    Card c;


    obj = &b;
    obj->show();

    obj = &u;
    obj->show();

    obj = &c;
    obj->show();

    return 0;
}