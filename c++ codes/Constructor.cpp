#include<iostream>
using namespace std;
class Calc
{
    int num1, num2;
    public: Calc() //Default Constructor
    {
        num1=num2=0;
        cout<<"Welcome to my Portal"<<endl;
    }
    Calc(int a) //Parameterized constructor
    {
        cout<<++a;
    }
    Calc(char c)
    {
        cout<<"In char "<<c;
    }
    Calc(int a, char b)
    {
        cout<<a <<"\t"<<b;
    }
    Calc(char x, int y)
    {
        cout<<x <<"\t"<<y;
    }
    void sum()
    {
        cout<<"Enter 2 numbers";
        cin>>num1>>num2;
        cout<<num1+num2;
    }
  ~Calc() //Destructor..will automatically call at the end only
  {
      cout<<" Objects destroyed"<<endl;
  }
};
int main()
{
    Calc c1;
    Calc c7(10,'5');
    Calc c5(10);
    Calc c3('r');
    c1.sum();
  //  c5.sum();
}
