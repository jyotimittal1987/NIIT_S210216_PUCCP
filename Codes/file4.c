 #include<stdio.h>

 main( )
   {
     FILE *fp;
     char c;
    fp= fopen("democode.TXT", "r");
     if (fp == NULL)
		printf("File doesn't exist\n");
     else {
      do {
       c = getc(fp); /* get one character from the file
       */
         putchar(c); /* display it on the monitor
       */
       } while (c != EOF); /* repeat until EOF (end of file)
     */
     }
    fclose(fp);
   }
