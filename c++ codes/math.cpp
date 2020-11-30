// CPP program to illustrate
// abs() function

#include <iostream>
using namespace std;
#include<cmath>

int main()
{
	int val1, val2;

	/// finding absolute value using
	/// abs() function.
	val1 = abs(22);
	val2 = abs(-43);

	cout << "abs(22) = " << val1 << "\n";
	cout << "abs(-43) = " << val2 << "\n";
	cout<<ceil(4.5)<<endl;
	cout<<floor(3.8)<<endl;
	cout<<sqrt(64)<<endl;
	char str[]="123A";
	int res=atoi(str);
	cout<<res;

	return 0;
}
