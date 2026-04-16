#include <iostream>

using namespace std;

class Animal
{
public:
    void showAnimal()
    {
        cout << "This is class Animal" << endl;
    }
};

class Dog : public Animal
{
public:
    void showDog()
    {
        cout << "This is class Dog" << endl;
    }
};

class Cat
{
public:
    void showCat()
    {
        cout << "This is class Cat" << endl;
    }
};

class Pet : public Dog, public Cat
{
public:
    void showPet()
    {
        cout << "This is class Pet" << endl;
    }
};

int main()
{
    Pet obj;

    obj.showAnimal();
    obj.showDog();
    obj.showCat();
    obj.showPet();

    return 0;
}