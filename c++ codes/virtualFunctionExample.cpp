#include<iostream>
using namespace std;
class Shape
{

    public : virtual void draw()
    {
    cout<<"Base class";
    };
    void display()
    {
        cout<<"Parent class display method";
    }
};
class Square : public Shape
{
    public: void draw()
    {
        cout<<"Square  class";
    };
};
class Rectangle : public Shape{
public: void draw()
{
    cout<<" Rectangle class ";
}
};
int main()
{
    //Shape s;
Shape *s;//*s is base class pointer
Square s1;
s=&s1; //Reference of derived class is stored in base class pointer
s->draw();//Runtime binding/ late binding/Dynamic Polymorphoism
Rectangle r1;
s=&r1;
s->draw();//late binding , binding happens at runtime.
s->display();
}
