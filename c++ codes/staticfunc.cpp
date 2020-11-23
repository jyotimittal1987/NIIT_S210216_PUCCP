#include<iostream>
using namespace std;
int global;
//Acess specifiers : private ,public, protected
class Encap_AbsEx
{
  static int num;//By default, it will be private
  public :static void display()
    {

   cout<<"Welcome "<<++num;

    }
    void get_data()
    {
        display();
    }


};
int Encap_AbsEx::num=20;//:: sco[pe resolution operator
int main()
{
    Encap_AbsEx e1;
    e1.get_data();

  Encap_AbsEx::display();
}
