#include <iostream>
using namespace std;
enum Fruits{orange=1, guava, apple};

int main()
  {

     enum Fruits myFruit=apple;

     switch(myFruit)
       {
         case 1:
         cout << "Your fruit is orange";
         break;
         case 2:
         cout << "Your fruit is guava";
         break;
         case 3:
         cout << "Your fruit is apple";
         break;
      }
     return 0;
  }
