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
	cin>>TESTS;
	while(TESTS--)
	{
		ll n;
		cin>>n;
		ll a[n+1][n+1];
		ll dp[n+1][n+1];
		rep(i,1,n+1)
		{
			rep(j,1,i+1)
			{
				cin>>a[i][j];
				dp[i][j]=0;
			}
		}
		dp[1][1]=a[1][1];
		rep(i,2,n+1)
		{
			rep(j,1,i+1)
			{
				if(j>1)
				dp[i][j]=max(dp[i-1][j-1]+a[i][j],dp[i][j]);
				if(j<i)
				dp[i][j]=max(dp[i-1][j]+a[i][j],dp[i][j]);
			}
		}
		ll ans=0;
		rep(i,1,n+1)
		ans=max(ans,dp[n][i]);
		cout<<ans<<endl;
	}
	return 0;
}

