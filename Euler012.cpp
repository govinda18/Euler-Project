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
vi primes;	
void sieve()
{
	vi prime(1000005,0);
	rep(i,2,1000005)
	{
		if(prime[i]==0)
		{
			primes.pb(i);
			for(int j=i*2;j<=100005;j+=i)
			prime[j]=1;
		}
	}
}
ll noofdiv(ll k)
{
	
	vi fac;
	for(int i=0;i<sz(primes)&&primes[i]*primes[i]<=k;i++)
	{
		ll ct=0;
		while(k%primes[i]==0)
		{
			ct++;
			k/=primes[i];
		}
		fac.pb(ct+1);
	}
	if(k!=1)
	fac.pb(2);
	ll ans=1;
	rep(i,0,sz(fac))
	ans*=fac[i];
	return ans;
}
int main()
{
	sieve();
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int TESTS=1;
	cin>>TESTS;
	while(TESTS--)
	{
		ll x;
		cin>>x;
		ll i=1,div=1;
		while(noofdiv((i*(i+1))/2)<=x)
		{
			ll no=(i*(i+1))/2;
			i++;
		}
		cout<<(i*(i+1))/2<<endl;
	}
	return 0;
}
