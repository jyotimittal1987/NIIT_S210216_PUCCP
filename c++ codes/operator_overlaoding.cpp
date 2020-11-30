#include<iostream>
using namespace std;
class MyInt
{
int a,b;
public: void accept(int , int);
void display();
void operator - ();//Declaration of operator overloading
};
void MyInt::accept(int x, int y)
{
    a=x;//a=10
    b=y;//b=-20
}
//OPerator overloading is used to change the behaviour of existing operator
void MyInt::operator -()
{
    a=-a;//a=-10
    b=-b;//b=20
}
void MyInt::display()
{
    cout<<a<<b;
}
int main()
{
    MyInt ob1;
    ob1.accept(10,-20);
    -ob1;//operator overloading
    ob1.display();
}
