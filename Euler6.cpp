#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long int s1=0,s2=0;
		for(int i=1;i<=n;i++)
		{s1+=(i*i);
		s2+=i;}
		s2=pow(s2,2);
		cout<<abs(s1-s2)<<endl;
	}
}
