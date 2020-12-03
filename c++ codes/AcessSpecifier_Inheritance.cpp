#include<iostream>
using namespace std;
class A
{
    int a;
    protected : int b;
    public : void display()
    {
        cout<<"Inheritance Example";
    }
};
class B :public  A
{
    //only the child can access the protected feature, it will not be
   // accessible from main()

};
int main()
{
    B obj;
    obj.display();
}
