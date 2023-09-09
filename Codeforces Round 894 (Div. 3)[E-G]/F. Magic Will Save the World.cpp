/*You don't get to choose if you get hurt in this world...but you do have some say in who hurts you. I like my choices.*/

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
// #define int             long long
#define all(a)          a.begin(),a.end()
#define endl            "\n"
#define fill(a,b) memset(a, b, sizeof(a))
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
using namespace std;
               
signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
while(t--){
    int i,j,x=0,y=0,p=0,n,d,q=-1,u=0,v=0,k,c=0,m;
    int w,f;
    cin>>w>>f;
    cin>>n;
    int a[n],s=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
    vector<vector<int>>dp(2,vector<int>(s+1,0));
    dp[0][a[0]]=1;
    dp[0][0]=1;
    for(i=1;i<n;i++){
        for(j=0;j<=s;j++){
            //not take
            dp[i%2][j]=dp[(i-1)%2][j];
            //take
            if(j-a[i]>=0) dp[i%2][j]|=dp[(i-1)%2][j-a[i]];
        }
    }
    int ans=1e9;
    for(j=0;j<=s;j++){
        if(dp[(n-1)%2][j]==1){
            x=j;
            y=s-j;
            ans=min(ans,max((x+w-1)/w,(y+f-1)/f));
        }
    }
    cout<<ans<<endl;
    



    }
}