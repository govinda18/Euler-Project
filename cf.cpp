#include <bits/stdc++.h>

#define ll          long long
#define pb          push_back
#define pii         pair<int,int>
#define vi          vector<int>
#define vii         vector<pii>
#define mi          map<int,int>
#define mii         map<pii,int>
#define all(a)      (a).begin(),(a).end()
#define x           first
#define y           second
#define sz(x)       (int)x.size()
#define endl        '\n'
#define hell        1000000007
#define rep(i,a,b)  for(int i=a;i<b;i++)
using namespace std;
int expo(int base,int exponent,int mod){
    int ans=1;
    while(exponent!=0){
        if(exponent&1) ans=(1LL*ans*base)%mod;
        base=(1LL*base*base)%mod;
        exponent>>=1;
    }
    return ans%mod;
}
const int M=1000006;
int f[M],inv[M];
void compute(){
    f[0]=1;
    rep(i,1,M){
        f[i]=(1LL*i*f[i-1])%hell;
    }
    inv[M-1]=expo(f[M-1],hell-2,hell);
    for(int i=M-2;i>=0;i--){
        inv[i]=(1LL*(i+1)*inv[i+1])%hell;
    }
}
int C(int n,int r){
    return (1LL*((1LL*f[n]*inv[r])%hell)*inv[n-r])%hell;
}
int dp[100005][3];
void solve(){
    dp[1][1]=10;
    dp[1][2]=5;
    dp[2][1]=9;
    dp[2][2]=4;
    rep(i,3,100001){
        if(i%2){
            int cur=0;
            rep(j,0,10){
                cur=(cur+C(9,j)*(expo((2*j-8+hell)%hell,i,hell)+hell-expo((2*j-10+hell)%hell,i,hell)))%hell;
            }
            dp[i][1]=
        }
        else{
            dp[i][1]=dp[i-1][1];
            dp[i][2]=dp[i-1][2];
        }
    }
    rep(i,1,100001){
        dp[i][1]=(dp[i][1]+dp[i-1][1])%hell;
        dp[i][2]=(dp[i][2]+dp[i-1][2])%hell;
    }
}
signed main(){
    compute();
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    int t=1;
    cin>>t;
    while(t--){
        int s,k;
        cin>>s>>k;
        cout<<dp[k][s]<<endl;
    }
    return 0;
}