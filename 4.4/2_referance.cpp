#include<iostream>
using namespace std;

void changnumbervalue(int &num)
{
    num = 50;
}

int main()
{
    int num = 10;
   
    changnumbervalue(num);

    cout << "num value "<<num << endl;
   
    return 0;
}
