#include <stdio.h>

#include <string.h>   /* declares strcmp() */

#define ANSWER "Grant"

#define MAX 40

int main()

{

    char try[MAX];//char try[40];
    puts("Who is buried in Grant's tomb?");

    gets(try);
 //try : grant  ANSWER : Grant
    while (strcmp(try,ANSWER) != 0)

    {

        puts("No, that's wrong. Try again.");

        gets(try);

    }

    puts("That's right!");
//strchr
 const char str[] = "http://www.niit.com";
   const char ch = '.';
   char *ret;

   ret = strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);

    return 0;

}
