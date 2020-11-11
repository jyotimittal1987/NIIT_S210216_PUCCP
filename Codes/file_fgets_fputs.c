#include<stdio.h>

void main(){

FILE *fp;
char text[300];
fp=fopen("demo.txt","r");
printf("%s",fgets(text,300,fp));
fclose(fp);

}
