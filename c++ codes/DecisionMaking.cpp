#include<iostream>
using namespace std;
class DecisionMaking
{
    int num;
    public : void even_odd()
    {
       cout<<"Enter a number";
       cin>>num;
       if(num%2==0)
       {
           cout<<"Even";
       }
       else
       {
           cout<<"Odd";
       }
    }
  void pos_neg_zer()
    {
        cout<<"Enter a number";
        cin>>num;
        if(num>0)
        {
            cout<<"Positive";
        }
        else if(num<0)
        {
          cout<<"Negative";
        }
        else{
          cout<<"number is zero";

        }

    }
};
int main()
{
    DecisionMaking d1;
    d1.even_odd();
    d1.pos_neg_zer();

}
