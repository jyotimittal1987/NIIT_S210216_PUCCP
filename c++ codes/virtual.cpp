#include <iostream>
using namespace std;
class A
{
public:
 virtual void display()
 {
  cout << "Base class is invoked"<<endl;
 }
 void show()
 {
     cout<<"Its base method";
 }
};
class B:public A
{
 public:
 void display()  //overriden method
 {
  cout << "Derived Class is invoked"<<endl;
 }
};

int main()
{
 A *a;    //pointer of base class
 B b;  //object of derived class
 a = &b;
 a->display();   //Late Binding occurs..Run time polymorphism
 a->show();

}
