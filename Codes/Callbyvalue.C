#include<stdio.h>
void swap(int,int);//function declaration
void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;

    *y=temp;
    printf("In function : x=%d \t y=%d \n",*x,*y);
}
main()
{
    int num1,num2;
    printf("Enter two numbers");
    scanf("%d%d",&num1,&num2);
    //swap(num1,num2);
    swap(&num1,&num2);
    printf("In main : num1=%d \t num2=%d",num1,num2);

}
