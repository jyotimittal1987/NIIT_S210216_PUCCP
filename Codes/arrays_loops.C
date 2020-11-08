#include<stdio.h>
#define SIZE 10
main()
{
    int arr[100],index,size;
  //  printf("Enter the size of an array");
  //  scanf("%d",&size);
    printf("Enter the values in an array");
    for(index=0;index<SIZE;index++)
    {
        scanf("%d",&arr[index]);
    }
    printf("The values in array are :\n");
      for(index=0;index<SIZE;index++)
    {
       printf("%d \t",arr[index]*2);
    }
}
