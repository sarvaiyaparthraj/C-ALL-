#include <iostream>
using namespace std;

class Shape
{

public:
    virtual void calculate() = 0;
};

class circle : public Shape
{

    float f;

public:
    circle(float radius)
    {

        f = radius;
    }

    void calculate()
    {

        cout << "circle :" << 3.14 * f * f << endl;
    }
};

class Tringle : public Shape
{

    float h, b;

public:
    Tringle(float hight, float base)
    {

        b = base;
        h = hight;
    }

    void calculate()
    {

        cout << "Tringle : " << 0.5 * b * h << endl;
    }
};

class Reactangle : public Shape
{

    float l, w;

public:
    Reactangle(float length, float width)
    {

        l = length;
        w = width;
    }

    void calculate()
    {

        cout << "Reactangle :" << l * w << endl;
    }
};

int main()
{

    Shape *obj;

    circle c(100);

    Tringle t(200, 300);

    Reactangle r(400, 500);

    obj = &c;
    obj->calculate();

    obj = &t;
    obj->calculate();

    obj = &r;

    obj->calculate();

    return 0;
}