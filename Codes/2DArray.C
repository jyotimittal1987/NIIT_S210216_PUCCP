#include<stdio.h>
main()
{
  int arr[2][3],row,column;
  printf("Enter the values in 2D array");
  for(row=0;row<2;row++)
  {
      for(column=0;column<3;column++)
      {
          scanf("%d",&arr[row][column]);
      }
  }
   for(row=0;row<2;row++)
  {
      for(column=0;column<3;column++)
      {
          printf("%d \t",arr[row][column]);
      }
      printf("\n");
  }

}
