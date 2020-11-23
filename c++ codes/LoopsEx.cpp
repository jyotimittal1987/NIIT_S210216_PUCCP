#include<iostream>
using namespace std;
class LoopsEx
{
   public: void  forLoop()
   {
       int counter=2;
       for(;counter<10;counter=counter*2)
       {
           cout<<counter;
       }
   }
   void whileLoop()
   {
       int counter=0;
       while(counter<10)
       {
           cout<<"counter";
           counter++;
       }

   }
   void dowhile()
   {
       int counter=10;
       do
       {
           cout<<counter;//10
           counter++;//11
       }while(counter<10);
   }
   void continueEx()
   {
       for(int i=0;i<10;i++)
       {
           if (i==5)
           {
                continue;
           }
           if(i==7)
           {
               break;
           }
          cout<<i;
       }

   }
};
int main()
{
    LoopsEx obj;
    //obj.forLoop();
   // obj.whileLoop();
   //  obj.dowhile();
   obj.continueEx();
}
