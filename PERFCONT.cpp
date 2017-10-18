#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,p;
		cin>>n>>p;
		
		
		int x,y;
		x=p/10;
		y=p/2;
	
		int h=0;
		int cw=0;
		while(n--)
		{
			int r;
			cin>>r;
			if(r<=x)
				h++;
			else if(r>=y)
				cw++;
		}
		if(cw==1&&h==2)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	  
	}
	return 0;
	
}