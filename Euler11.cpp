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
		ll int a[20][20];
		rep(i,0,20)
		rep(j,0,20)
		cin>>a[i][j];
		ll int ans=0;
		rep(i,0,20)
		rep(j,0,20)
		{
			if(i<17)
			ans=max(ans,a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j]);
			if(j<17)
			ans=max(ans,a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3]);
			if(j<17&&i<17)
			ans=max(ans,a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3]);
			if(j>2&&i<17)
			ans=max(ans,a[i][j]*a[i+1][j-1]*a[i+2][j-2]*a[i+3][j-3]);
		}
		cout<<ans;	
	}
	return 0;
}

