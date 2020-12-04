#include<iostream>
using namespace std;
class Shape  //Abstract class, which contain pure virtual function
{
    public: virtual void draw()=0;//virtual function without any body, pure virtusl fucntion

    void display()
    {
        cout<<"Parent class display method";
    }
};
class Square : public Shape
{
    //mandatory for child class to override the pure virtual fucntion
  public: void draw()
    {
        //code goes here
    }

};
int main()
{
    //Shape s;
Shape *s;//*s is base class pointer
Square s1;
s=&s1; //Reference of derived class is stored in base class pointer
s->draw();//Runtime binding/ late binding/Dynamic Polymorphoism

}
