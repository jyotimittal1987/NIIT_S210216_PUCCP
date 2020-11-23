#include<iostream>
using namespace std;
class Enc_abs
{
    int a;//by default access specifier will be private
    public  : void display()
    {
        cout<<"Welcome";
    }
};
int main()
{
    Enc_abs e1;
    e1.display();

}
