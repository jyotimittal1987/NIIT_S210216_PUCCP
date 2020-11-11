/* Program to create a file and write some data the file */
#include <stdio.h>

main( )
{
     //int a;
     FILE *fp;//declaring the file type pointer
     char stuff[25];
     int index;
     //we are opening a file for writing purpose
     fp = fopen("Batch_S210216.txt","w"); /* open for writing */
     //we are copying the string into char type array
     strcpy(stuff,"Hii Komal!!!");
     for (index = 1; index <= 10; index++)
      //fprintf is used to write the content into a file
     	fprintf(fp,"%s Line number %d\n", stuff, index);
     fclose(fp); /* close the file before ending program */
}
