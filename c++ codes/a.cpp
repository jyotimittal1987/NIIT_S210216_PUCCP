#include<iostream>
using namespace std;
class distance1
{
	int length;
	public:
	distance1(int);
        void operator =(distance1);//operator overloading
};

distance1::distance1(int a)
{
 length=a;
}

void distance1::operator =(distance1 d)
{
 if (length==d.length)
 {
 cout<<length<<" is equal to "<<d.length;
 }
 else
 {
 cout<<length<<" is not equal to "<<d.length;
 }
}
int main()
{
 distance1 d1(10);
 distance1 d2(20);
 d1=d2;//objects...operator overloading
 return 0;
}
