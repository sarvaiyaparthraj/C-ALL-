#include<iostream>
using namespace std;

int main()
{
    int p=10;
    int &g=p;

    cout  <<"value before changing " << endl;

    cout  << "p value "<< p << endl;
    cout  << "g value "<< g << endl;
    

    cout<<" value after changing"<<endl;

    g=18;
    
    cout << "p value "<< p << endl;
    cout << "g value "<< g << endl;


    return 0;
}
