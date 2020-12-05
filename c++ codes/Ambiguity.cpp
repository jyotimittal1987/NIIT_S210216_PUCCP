#include<iostream>
using namespace std;
class A
{
public : void display()
{
cout<<"class A";
}
};
class B
{
  public : void display()
  {
      cout<<"class B";
  }

};
class C : public A, public B
{
    public: void display()
    {
     A::display();
     B::display();
    }

};
int main()
{
C c1;
//c1.B::display();
c1.display();
}
