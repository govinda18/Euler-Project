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
int N=1000005;
vi isPrime(N+1),primes;
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
			primes.pb(i);
             for(int j = i * 2; j <= N ;j += i)
                 isPrime[j] = 0;
        }
    }
}

int main()
{
	sieve();
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t=1;
	cin>>t;
	while(t--)
	{
		ll n,ans=1;
		cin>>n;
		cout<<primes[n-1]<<endl;
	}
	return 0;
}

