#include<stdio.h>

void main () {
   FILE *fp;
   char str[] = "This is c sessions";

   fp = fopen( "file.txt" , "w" );
   fwrite(str , 1 , sizeof(str) , fp );

   fclose(fp);



}
