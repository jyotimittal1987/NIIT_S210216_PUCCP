#include<iostream>
using namespace std;
class Parent
{
    public : Parent()
    {
     cout<<"Parent class Constructor"<<endl;
    }
    ~Parent()
    {
        cout<<"Parent class destructor"<<endl;

    }
};
class Derived : public Parent{

public:Derived()
{
    cout<<"Derived class constructor"<<endl;
}
~Derived()
{
    cout<<"Derived class destructor"<<endl;
}
};
int main()
{
    Derived obj;
}
