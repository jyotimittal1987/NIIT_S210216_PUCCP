/* sscanf example */
#include <stdio.h>
// The sscanf() function allows us to read formatted data from a string rather than standard input or keyboard.
void main ()
{
  char sentence []="Rudolph is 12 years old";
  char str [20];
  int i;

  sscanf (sentence,"%s %s %d",str,&i);
  printf ("%s -> %d\n",str,i);
  char buffer[30]="Welcome 5 ";
   char name [20];
   int age;
   sscanf (buffer,"%s %d %d",name,&age);
   printf ("Name : %s \n Age : %d \n",name,age);

}
