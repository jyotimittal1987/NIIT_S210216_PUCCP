#include<iostream>
using namespace std;
class TwoD
{
    int arr[2][3];
    public : void accept()
    {
        cout<<"Enter values in 2D";
        //nested loop..outer loop is for row and inner loop id for column
        for(int row=0;row<2;row++)
        {
            for(int column=0;column<3;column++)
            {
                cin>>arr[row][column];//row =0,column=0, arr[0][0]
            }
        }

    }
    void display()
    {

        cout<<"The values in 2 D are \n";
       for(int row=0;row<2;row++)
        {
            for(int column=0;column<3;column++)
            {
               cout<<arr[row][column]<<"\t";//row =0,column=0, arr[0][0]
            }
            cout<<"\n";
        }
    }

};
int main()
{
TwoD d1;
d1.accept();
d1.display();
}
