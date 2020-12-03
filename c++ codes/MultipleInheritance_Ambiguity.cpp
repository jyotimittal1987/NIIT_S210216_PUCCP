#include<iostream>
using namespace std;
class A
{
    public : void display()
    {
        cout<<"Class A";
    }
};
class B
{

   public : void display()
    {
        cout<<"Class B";
    }
};
class C : public A, public B  //multiple Inheritance
{

    public : void display3()
    {
        cout<<"class C";
    }
   /* void display()
    {
        A::display();
        B::display();
    }*/
};
int main()
{
    C c1;
 //   c1.display();
 c1.A::display();
 c1.B::display();
    c1.display3();

}
