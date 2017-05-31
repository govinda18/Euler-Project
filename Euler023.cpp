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
vi finddiv(ll n)
{
	vi ans;
	for(int i=1;i<=sqrt(n);i++)
	{
	   if(n%i==0)
	   {
	       ans.pb(i);
		   if(i*i!=n)
		   ans.pb(n/i);
		}
	}
	return ans;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	vi ab;
	rep(i,1,28125)
	{
		vi div=finddiv(i);
		ll s=0;
		rep(j,0,sz(div))
		if(div[j]!=i)
		s+=div[j];
		if(s>i)
		ab.pb(i);
	}
	int TESTS=1;
	cin>>TESTS;
	while(TESTS--)
	{
		ll n;
		cin>>n;
		if(n>28123)
		cout<<"YES\n";
		else
		{
			int fl=0;
			rep(i,0,sz(ab))
			{
				if(ab[i]>n)break;
				if(bs(all(ab),n-ab[i]))
				fl=1;
			}
			if(fl)cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
	return 0;
}

