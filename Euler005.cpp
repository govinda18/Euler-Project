#include<stdio.h>
long long int gcd(long long int,int);
long long int lcm(int [],int);
main()
{
	int t,k,n,i;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
		scanf("%d",&n);
		int a[n];
		for(i=1;i<=n;i++)
		a[i-1]=i;
		printf("%lld\n",lcm(a,n));
	}
}
long long int lcm(int arr[],int n)
{
   long long int result=1;
   for(int i=0;i<n;i++)
      result=result*arr[i]/gcd(result,arr[i]);
   return result;     
}
 
long long int gcd(long long int a,int b)
{
   if(b == 0)
      return a;
   else return gcd(b,a%b);    
}
