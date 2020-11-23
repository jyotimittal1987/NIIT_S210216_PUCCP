#include<iostream>
using namespace std;
int global=50; //File Scope..global variable
class ScopeEx
{
    int num=20; //class scope
    public: void display()
    {
        int local=10; //local scope
        cout<<local;
        cout<<num;
        for(int i=0;i<10;i++)
        {
        //i is local to for loop
        }
    }
    void display1()
    {
       // cout<<local;
       cout<<num;
       cout<<global;
    }
};
class ScopeEx1
{
     void display1()
    {


       cout<<global;
    }
};
int main()
{
    ScopeEx e1;
    e1.display1();

}
