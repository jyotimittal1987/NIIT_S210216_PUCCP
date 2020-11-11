#include <stdio.h>
void main(){
   FILE *fp;

   fp = fopen("democode_new.txt","w+");//write and read
   fputs("This is fseek example", fp);

  fseek( fp, 7, SEEK_SET );
  fputs("c programming language", fp);
   fclose(fp);
}
