#include<stdio.h>
void display();
main()
{
display();
display();
}
void display()
{
    static int a=10;
    printf("%d \n",++a);
}


