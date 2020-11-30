// CPP program to illustrate strstr()
#include <string.h>
#include <iostream>
using namespace std;

int main()
{
	// Take any two strings
	char s1[] = "NIITforProgamming";
	char s2[] = "for55";
	char* p;//declare p which is of pointre char type

	// Find first occurrence of s2 in s1
	p = strstr(s1, s2);//first parameter in which we want to scan , second parameter is what you want to scan

	// Prints the result
	if (p) {
		cout<<"String found\n";
		//In c++, if you want to show the o/p in formatting string, we can use printf
		printf("First occurrence of string '%s' in ' %s' is ' %s'", s2, s1, p);
		cout<<endl;
	} else
		printf("String not found\n");

		int comp=strcmp("Aello","Hello");
		//-1, 1, 0
		cout<<comp<<endl;
		if (comp>0)
        {
        cout<<"string 1 is greater";
        }
        else if(comp<0)
        {
            cout<<"string 2 is greater";
        }
        else{
            cout<<"Both strings are equal";
        }
		//strchr
 const char str[] = "http://www.niit.com";
   const char ch = '.';
   char *ret;

   ret = strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);

	return 0;
}
