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

   public : void display1()
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
};
int main()
{
    C c1;
    c1.display();
    c1.display1();
    c1.display3();

}
