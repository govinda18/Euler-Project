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
vi ans(5000005,0),ans2(5000005,0);
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	rep(i,1,1000005)
	{
		ll cnt=0;
		ll val=i;
		while(val!=1)
		{
			cnt++;
			if(val%2==0)val/=2;
			else val=3*val+1;
			if(val>=1000005)continue;
			if(ans[val]!=0)
			{
				cnt+=ans[val];
				break;
			}
		}
		ans[i]=cnt;
	}
	ll mx=-1;
	rep(i,1,1000005)
	{
		if(ans[i]>mx)
		{
			mx=ans[i];
			ans2[i]=i;
		}
		else ans2[i]=ans2[i-1];
	}
	int TESTS=1;
	cin>>TESTS;
	while(TESTS--)
	{
		ll n;
		cin>>n;
		cout<<ans2[n]<<endl;
	}
	return 0;
}

