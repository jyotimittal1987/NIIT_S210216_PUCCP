#include<stdio.h>
main()
{
int a=10;
int *p;
p=&a;//pointer p is now pointing to address of a
printf("a=%d \n",a);
printf("Address =%d \n",p);
printf("p=%d\n ",*p);



}
