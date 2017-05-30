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
		int n,ans=0;
		cin>>n;
		rep(i,1,n)
		{
			int x=n*n-2*n*i;
			int y=2*(n-i);
			if(x%y!=0)continue;
			int j=x/y;
			int k=n-i-j;
			if((i*i+j*j==k*k)&&(i<j&&j<k))ans=max(ans,i*j*k);
		}
		if(ans)
		cout<<ans<<endl;
		else cout<<-1<<endl;
	}
	return 0;
}
