#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
   char str1[12] = "Hello";
   char str2[12] = "World";
   char str3[12];// its an empty array
   int  len ;

   /* copy str1 into str3 */
   strcpy(str3, str1);
   cout<<str3<<endl;

   /* concatenates str1 and str2 */
   strcat( str1, str2);
   cout<<str1<<endl;

   /* total lenghth of str1 after concatenation */
   len = strlen(str1);
   cout<<len<<endl;
    char src[] = "It's Monday and it's raining";
    char dest[40];

    /* count less than length of src */
    strncpy(dest,src,6);
    cout << dest << endl;

   return 0;
}
