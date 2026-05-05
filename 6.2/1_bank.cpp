#include<iostream>
using namespace std;


class Bank{
     
    public :
    virtual void payment ()=0;

};

class upi:public Bank {
     public:
     void payment(){
    cout<<"Payment by upi"<<endl;
     }
};
  class Card:public Bank{
     public :
     void payment(){
        cout<<"Payment by Card"<<endl;

     }
  };

int main ()
{

Bank *obj;

upi u;
Card c;

obj = &u;
obj->payment();


obj = &c;
obj->payment();


    return 0;
}
