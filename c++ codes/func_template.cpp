#include<iostream>
using namespace std;
//int FindMAx(int, int)
//FindMax(long,long)
template<class DT>DT FindMax(DT m,DT n)//generic
{
return (m>n?m:n);
}
int main()
{
int a=12,b=23,c;
long x=123,y=456,u;
c=FindMax<int>(a,b);
u=FindMax<long>(x,y);
cout<<"greater value in int="<<c;
cout<<"greater value inlong="<<u;

}
//FindMax(int,int)
//FindMax(long,long)
//FindMax(float, float)
