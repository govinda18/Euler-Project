#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int s=0,x3,x5,x15,n,t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		s=0;
		cin>>n;
		x3=n/3;
		if(n%3==0)
		x3--;
		x5=n/5;
		if(n%5==0)
		x5--;
		x15=n/15;
		if(n%15==0)
		x15--;
		s+=(3*(x3)*(x3+1))/2;
		s+=(5*(x5)*(x5+1))/2;
		s-=((15*x15*(x15+1))/2);
		cout<<s<<endl;
	}
	return 0;
	
}
