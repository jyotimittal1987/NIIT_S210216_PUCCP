#include<stdio.h>
int num=20;
main()
{
inc();
printf("%d",num);
}
void inc()
{
    //local variables : scope is limited to function where you have  declared it
int a;//auto
printf("%d",a);
printf("%d",num);
}
