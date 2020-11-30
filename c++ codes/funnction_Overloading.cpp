#include<iostream>
using namespace std;
class Calc
{
//Function overloading never depends upon return type
public : void sum()
{
 cout<<10+20;
}
void sum(float y)
{
cout<<"float data "<<y;
}
void sum(int a)
{
    cout<<++a;

}
void sum(int a, int b)
{
 cout<<a+b;
}
void sum(int a, char b)
{
    cout<<a<<"\t"<<b;
}
void sum(char a, int y)
{
    cout<<a <<"\t"<<y;
}
};
int main()
{
Calc c1;
c1.sum();
c1.sum(10);
c1.sum(2.3f);
c1.sum('a',6);

}
