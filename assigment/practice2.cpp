   
#include <iostream>
using namespace std;
class Shape
{
protected:
    double dimension;

public:
    void setdimension(double d)
    {
        dimension = d;
    }
    void calculateArea()
    {
        cout << "the dimension of base class";
    }
};
class Square : public Shape
{
public:
    void calculateArea()
    {
        cout << "the area of the square is :" << dimension * dimension << endl;
    }
};

class Circle : public Shape
{
public:
    void calculateArea()
    {
        cout << "the area of the cicle is:" << 3.14 * dimension * dimension << endl;
    }
};
int main()
{

    Square S;
    S.setdimension(3.9);

    S.calculateArea();

    // the area if the square is
    //  Shape* C1;
    Circle C;
    C.setdimension(2.9);

    C.calculateArea();
}