/* ****GT_18**** */

#include<bits/stdc++.h>
#define	MIN(a,b,c)	min(min(a,b),c)
#define	MAX(a,b,c)	max(max(a,b),c)
#define ll          long long
#define itr         vector<int>::iterator
#define pb          push_back
#define mp          make_pair
#define pii         pair<int,int>
#define vi          vector<ll int>
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
int N=1e6+5;
vi isPrime(N+1);
vi p,s;
void sieve()
{
    for(int i = 0; i <= N;++i)
	{
        isPrime[i] = 1;
    }
    isPrime[0] = 0;
    isPrime[1] = 0;
    for(int i = 2; i <= N; ++i)
	{
         if(isPrime[i] == 1)
		 {
		 	p.pb(i);
             for(int j = i * 2; j <= N ;j += i)
                 isPrime[j] = 0;
        }
    }
    s.pb(2);
    for(int i=1;i<sz(p);i++)
    s.pb(s[sz(s)-1]+p[i]);
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
		ll int n;
		cin>>n;
		if(n==1){cout<<0<<endl;continue;}
		int ub=ubnd(all(p),n)-p.begin();
		cout<<s[ub-1]<<endl;		
	}
	return 0;
}
