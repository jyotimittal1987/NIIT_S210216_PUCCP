#include<stdio.h>

void main(){
FILE *fp;
char c;

fp=fopen("Batch_S210216.txt","r");

while((c=fgetc(fp))!=EOF){
printf("%c",c);
}
fclose(fp);

}
