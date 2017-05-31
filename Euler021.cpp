/* ****GT_18**** */
//Motivational Source->FUHPD

#include<bits/stdc++.h>
#define	MIN(a,b,c)	min(min(a,b),c)
#define	MAX(a,b,c)	max(max(a,b),c)
#define ll          long long
#define itr         vector<ll int>::iterator
#define pb          push_back
#define mp          make_pair
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define endl        '\n'
#define rep(i,a,b)	for(ll int i=a;i<b;i++)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
using namespace std;
vi ans(100005,0);
ll cal(ll n)
{
	ll s=0;
	rep(i,1,sqrt(n)+1)
	{
		if(n%i==0)
		{
			s+=i;
			if(i*i!=n)
			s+=(n/i);
		}
	}
	s-=n;
	ll s1=0;
	rep(i,1,sqrt(s)+1)
	{
		if(s%i==0)
		{
			s1+=i;
			if(i*i!=s)
			s1+=(s/i);
		}
	}
	s1-=s;
	if(s1==n&&s!=n)
	return 1;
	else
	return 0;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	rep(i,1,100005)
	{
		ans[i]=cal(i);
	}
	rep(i,1,100005)
	{
		if(ans[i])
		ans[i]=i+ans[i-1];
		else
		ans[i]=ans[i-1];
	}
	int TESTS=1;
	cin>>TESTS;
	while(TESTS--)
	{
		ll n;
		cin>>n;
		cout<<ans[n]<<endl;
	}
	return 0;
}

