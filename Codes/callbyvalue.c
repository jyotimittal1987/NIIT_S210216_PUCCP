#include <stdio.h>
void swapnum( int var1, int var2)//var1-35,var2-45
{
   int tempnum ;
   /*Copying var1 value into temporary variable */
   tempnum = var1 ;//tempnum=35

   /* Copying var2 value into var1*/
   var1 = var2 ;//var1=45

   /*Copying temporary variable value into var2 */
   var2 = tempnum ;//var=35
    printf("\nAfter swapping: %d, %d", var1, var2);//45,35
}
void main( )
{
    int num1 = 35, num2 = 45 ;
    printf("Before swapping: %d, %d", num1, num2);//35, 45
    /*calling swap function*/
   swapnum(num1, num2);//swapnum(35,45)
    printf("\nAfter swapping: %d, %d", num1, num2);
}
