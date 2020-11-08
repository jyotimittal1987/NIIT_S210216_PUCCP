#include<stdio.h>
/*void display() //function declaration and definition together
{
    printf("Hello World");
}  */
void display();//function declaration
main()
{
    //function calling
   display();
   //int r=inc();
  // printf("In main : %d",r);
   int num;
    printf("Enter a number");
    scanf("%d",&num);
  printf("%d",inc(num));//Argument
}
int inc(int a) //parameter
{

  return ++a;
}
void display() // definition together
{
    printf("Hello World\n");
}

/* void inc()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    printf("%d",++num);

}*/
/* int inc()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    int res=++num;
    return res;

}*/
/* void inc()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    printf("%d",++num);

}*/

