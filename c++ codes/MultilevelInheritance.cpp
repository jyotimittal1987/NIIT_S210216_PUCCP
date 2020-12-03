#include<iostream>
using namespace std;
class A
{
    int a;
    public: void display()
    {
        cout<<"Class A";
    }
};
class B : public A
{
    int b;
    public : void display1()
    {
        cout<<"Class B";
    }
};
class C: public B
{
    int c;
    public : void display2()
    {
        cout<<"Class C";
    }
};
int main()
{
    C c1;
    c1.display();
}
