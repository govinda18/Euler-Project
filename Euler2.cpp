#include<stdio.h>
main()
{
	int t,k;
	long long int t1,t2,a,s=0,n;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
        s=0;
	scanf("%lld",&n);
	t1=1;
	t2=1;
	while(t1+t2<n)
	{
		a=t1+t2;
		if(a%2==0)
		s+=a;
        t2=t1;
        t1=a;
	}
	printf("%lld\n",s);}
}
