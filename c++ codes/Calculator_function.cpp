#include<iostream>
using namespace std;
class Calculator
{
   int num1,num2 ;//member variable..state or properties or attributes of an obje
   public: void add()
   {
       cout<<"Enter two numbers";//to display the message
      cin>>num1>>num2;// to accept the value from user
      cout<<num1+num2;
   }
};
int main()
{
 Calculator c1;
 c1.add();
}
