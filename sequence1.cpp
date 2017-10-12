#include<bits/stdc++.h>
using namespace std;
int main(){
int flag;int s;
cin>>s;
int a[s];
for(int i=0;i<s;i++)
cin>>a[i];
int q;
cin>>q;
int b[q];
for(int i=0;i<q;i++)
cin>>b[i];flag =1;
for(int i=0;i<s;i++)
{
for(int j=0;j<q;j++)
{if(a[i]==b[j])
{

flag=0;
break;}
}
if(flag==1)
cout<<a[i]<<" ";
flag=1;}
return 0;
}
