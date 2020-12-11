#include<iostream>
using namespace std;
template <class DT>
class mix
{
DT val1,val2;//int val1,val2;
public:mix(DT first,DT second)
{
val1=first;//20
val2=second;//8
}
DT FindMax();
};
template <class DT>DT mix<DT>::FindMax()
{
DT rval;//int rval;
rval=val1>val2?val1:val2;
return rval;
}
int main()
{
mix<int> ob(20,8);
cout<<ob.FindMax();
}
