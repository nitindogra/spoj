#include<iostream>
#include<cmath>

using namespace std;
int factorial(int n)
{
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}
int main()
{
	
int n;
cin>>n;
long long int s,m,l;
 s=factorial(n);
 m=pow(2,n);
   l=s+m-n;
   cout<<l;
   

}