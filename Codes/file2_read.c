/* Program to display the contents of a file on screen */
#include <stdio.h>
void main()
{
   FILE *fp;
   int c;
   fp = fopen("Batch_S21021633.txt","r");
   c = getc(fp) ;
   //EOf : end of file
   while (c!= EOF)
   {
   		putchar(c);
		c = getc(fp);
   }
}
