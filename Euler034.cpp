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
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int TESTS=1;
//	cin>>TESTS;
	while(TESTS--)
	{
		vi a;
		a.pb(1);
		ll cur=1;
		rep(i,1,10)
		{
			cur*=i;
			a.pb(cur);
		}
		ll ans=0;
		int n;
		cin>>n;
		rep(i,10,n)
		{
			ll s=0,t=i;
			while(t>0)
			{
				ll k=a[t%10]%i;
				s+=k;
				s%=i;
				t/=10;
			}
			if(s%i==0)
			ans+=i;
		}
		cout<<ans;
	}
	return 0;
}

