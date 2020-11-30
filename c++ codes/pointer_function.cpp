#include<iostream>
using namespace std;
// function declaration:
double getAverage(int *arr, int size);//function declaration

int main ()
{
   // an int array with 5 elements.
   int balance[5] = {1000, 2, 3, 17, 50};//balance is the name of array
   double avg;

   // pass pointer to the array as an argument.
   avg = getAverage( balance, 5 ) ;

   // output the returned value
   cout << "Average value is: " << avg << endl;

   return 0;
}

double getAverage(int *arr, int size)
{
  int    i, sum = 0;
  double avg;
//  int balance[5] = {1000, 2, 3, 17, 50};
  for (i = 0; i < size; ++i)
  {
    sum += arr[i];//sum=sum+arr[i]; //sum=0+arr[0]; //sum=0+1000 // sum=1000+2
   }

  avg = double(sum) / size;

  return avg;
}
