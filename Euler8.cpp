/* ****GT_18**** */

#include<bits/stdc++.h>
#define	MIN(a,b,c)	min(min(a,b),c)
#define	MAX(a,b,c)	max(max(a,b),c)
#define ll          long long
#define itr         vector<int>::iterator
#define pb          push_back
#define mp          make_pair
#define pii         pair<int,int>
#define vi          vector<int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (int)x.size()
#define hell        1000000007
#define endl        '\n'
#define rep(i,a,b)	for(int i=a;i<b;i++)
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
		ll n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		ll m=0;
		for(int i=0;i<n-k;i++)
		{
			ll int ans=1;
			for(int j=i;j<i+k;j++)ans*=(s[j]-'0');
			m=max(m,ans);
		}
		cout<<m<<endl;;
	}
	return 0;
}

