#include<iostream>
using namespace std;
class Shape  //Parent class..base class..super class
{
    //We cannot inherit the private members , only protected and public members will be inherited.
   protected:int widht,height;//protected means only the child class will be
   //able to access the features of parent class
    public : void setWidth(int w)
    {
       widht=w;
    }
    void setHeight(int h)
    {
        height=h;
    }
};
class Rectangle : public Shape  //child class..derived class./..sub class
{
    public :void getArea()
    {
       cout<< widht*height;
    }
};
int main()
{
    Rectangle r1;
    r1.setWidth(10);
    r1.setHeight(20);
    r1.getArea();
    Shape s1;
    s1.setHeight(100);
 //   s1.height=99;// not accessible due to its protected feature even in the main


}
