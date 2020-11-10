#include <stdio.h>
struct s
{
char name[50];
int height;
};
int main(){
    struct s a[5],b[5];
    FILE *fptr;
    int i;
    fptr=fopen("file.txt","w");
    for(i=0;i<5;++i)
    {
        fflush(stdin);
        printf("Enter name: ");
        gets(a[i].name);
        printf("Enter height: ");
        scanf("%d",&a[i].height);
    }
    fwrite(a,sizeof(a),2,fptr);
    fclose(fptr);
    fptr=fopen("file.txt","r");
    fread(b,sizeof(b),2,fptr);
    for(i=0;i<5;++i)
    {
        printf("Name: %s\nHeight: %d",b[i].name,b[i].height);
    }
    fclose(fptr);
}
