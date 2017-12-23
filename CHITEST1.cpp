#include<iostream>
using namespace std;
template< class t1,class t2>
void sum(t1 x,t2 y)
{
	cout<<x+y<<endl;
}
int main()
{   int t;
	cin>>t;
	while(t--)
	{float i,j;
	cin>>i>>j;
	sum(i,j);
    }
    return 0;
}