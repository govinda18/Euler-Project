#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int ispal(int);
int main()
{
	int k=0;
	for(int i=100;i<1000;i++)
	{
		for(int j=100;j<1000;j++)
		if(ispal(i*j))
		{a[k]=i*j;
		k++;
		}
	}
	sort(a,a+k);
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	for(int i=1;i<k;i++)
	{if(a[i]>=n)
	{cout<<a[i-1]<<endl;
	break;}}}
}
int ispal(int a)
{
	int temp=a,s=0;
	while(a>0)
	{
		s=10*s+(a%10);
		a/=10;
	}
	if(s==temp)return 1;
	else return 0;
}
