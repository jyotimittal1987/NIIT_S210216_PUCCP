#include<iostream>
using namespace std;
class A
{
    public : int x;
};
class B:virtual public A
{
    public : int y;
};
class C: virtual public A
{
    public: int z;
};
class D : public B, public C
{
    public : int w;
};
int main()
{
    D d1;
    d1.x=10;

}
