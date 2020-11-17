#include<iostream>
using namespace std;
class Demo
{
   public : void display()
   {
       //:: scope resolution operator
      //std::cout<<"Hello World !";
      cout<<"Hello World!!";

   }
};
//class always has a logical structure, to allocate the memory to class , we need to create the object of a class
//object -Real world entity
int main()
{
    //we need to create the object of a class.
    //Demo is the name of the class and d1 is the name of object.
    Demo d1;//we are instantiating the class
    d1.display();//Through object we can invoke the member function of the class

}
