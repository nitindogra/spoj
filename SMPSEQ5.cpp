#include<iostream>
using namespace std;
int  main()
{
	int m;
	cin>>m;
	int a[m];
	for(int i=1;i<=m;i++)
		cin>>a[i];
	int n;
	cin>>n;
	int b[n];
	for(int i=1;i<=n;i++)
		cin>>b[i];
	if(n>m)
		for(int i=1;i<=m;i++)
		{
			if(a[i]==b[i])
				cout<<i<<" ";
		}
		else
			for(int i=1;i<=n;i++)
			{
				if(a[i]==b[i])
					cout<<i<<" ";
			}
}