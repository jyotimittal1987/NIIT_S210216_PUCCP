#include<iostream>
using namespace std;
class Calculator
{
   int num1,num2 ;//member variable..state or properties or attributes of an object
   public : void accept() //member function or method ..they depict the behaviour of class
   {
       cout<<"Enter two numbers";//to display the message
       cin>>num1>>num2;// to accept the value from user
   }
   public: void add()
   {
      cout<<num1+num2;
   }
};
class Test
{
    public: void display()
    {
        cout<<"Hello World!!";
    }
};
int main()
{
    //Through  object creation we are allocating the memory to classs

Calculator c1;//c1 is the object name for class calculator
c1.accept();
c1.add();
Calculator c2;
c2.accept();
c2.add();
Calculator c4;
Test t1;
t1.display();
}
