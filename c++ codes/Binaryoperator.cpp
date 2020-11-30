#include<iostream>
using namespace std;
class MyNum
{
    int number;
    public:void accept(int);
    MyNum operator +(MyNum);
    void display()
    {
        cout<<number;
    }
};
void MyNum::accept(int a)
{
    number=a;
}
MyNum MyNum::operator+(MyNum x)
{
MyNum temp;
temp.number=number+x.number;
return temp;

}
int main()
{
    MyNum n1;
    n1.accept(10);//number=10
    MyNum n2;
    n2.accept(20);//number=20
    MyNum n3;
    n3=n1+n2;
    n3.display();

}
