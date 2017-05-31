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
ll int fac[15];
ll n;
string s="abcdefghijklm";
char findchar(ll c)
{
	ll req=13-c;
	int cnt=0;
	while(n>fac[req])
	{
		n-=fac[req];
		cnt++;
	}
	
	char ans=s[cnt];
	s.erase((s.begin())+cnt);
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int TESTS=1;
	cin>>TESTS;
	while(TESTS--)
	{
		s="abcdefghijklm";
		cin>>n;
		fac[0]=1;
		fac[1]=1;
		rep(i,2,15)
		fac[i]=fac[i-1]*i;
		rep(i,1,14)
		{
			cout<<findchar(i);
		}
		cout<<endl;
	}
	return 0;
}

