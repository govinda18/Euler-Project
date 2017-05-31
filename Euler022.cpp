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
		int n;
		cin>>n;
		map<int,string> a;
		map<string,int> ans;
		vector<string> b;
		rep(i,0,n)
		{
			string s;
			cin>>s;
			a[i+1]=s;
			b.pb(s);
		}
		sort(all(b));
		rep(i,0,sz(b))
		{
			int s=0;
			rep(j,0,sz(b))
			s+=b[i][j]-'A';
			s*=i+1;
			ans[b[i]]=s;
		}
		int q;
		cin>>q;
		while(q--)
		{
			int k;
			cin>>k;
			cout<<ans[a[k]]<<endl;
		}
	}
	return 0;
}

