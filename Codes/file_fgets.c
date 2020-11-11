#include<stdio.h>

void main(){
FILE *fp;


fp=fopen("demo.txt","w");
fputs("hello c programming",fp);

fclose(fp);


}
