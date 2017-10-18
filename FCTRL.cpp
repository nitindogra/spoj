#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{    int m=0;
		int n;
		cin>>n;
		if(n>5)
		{for(int i=5;;i=i*5)
		{
          
           if(n/i==0)
           	break;
            m=m+ n/i;
		}
	}
		cout<<m<<endl;

	}
}