#include<stdio.h>
void display();//fucntion declaration
int add();
main()  //predefined function
{
   display();//function calling
   display();
   display();
   int h=add();
   printf("%d",h);
}
void display()  //Definition /body of function
{
    printf("Hello World \n");
}
int add()
{
    int a,b,c;
    printf("\n Enter two numbers");
    scanf("%d%d",&a,&b);
    //printf("%d",a+b);
    c=a+b;
    return c;
}
