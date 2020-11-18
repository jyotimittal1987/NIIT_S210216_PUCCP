#include<iostream>
using namespace std;
class SwitchCaseEx
{
    int choice;
    int num1,num2;
    public: void get_detail()
    {
        cout <<"Enter your choice 1. Addition 2. Subtraction ...";
        cin>>choice;
        cout<<"Enter 2 numbers";
        cin>>num1>>num2;
        switch(choice)
        {
            case 1:cout<<num1+num2;break;
            case 2:cout<<num1-num2;break;
            default : cout<<"Invalid choice";
        }

    }

};
int main()
{
    SwitchCaseEx s1;
    s1.get_detail();
}
