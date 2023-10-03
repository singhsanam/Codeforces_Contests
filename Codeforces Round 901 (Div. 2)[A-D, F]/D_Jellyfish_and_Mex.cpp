/*You don't get to choose if you get hurt in this world...but you do have some say in who hurts you. I like my choices.*/

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define int             long long
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
    int f1[5006]={0};
    cin>>t;
while(t--){
    int i,j,x=0,y=0,p=0,n,q=-1,u=0,v=0,k,c=0,m;
    cin>>n;
    int a[n];
    set<int>s1;
    map<int,int>m1;
    rep(i,0,n) {
        cin>>a[i];
        if(a[i]>5005) a[i]=5005;
        s1.insert(a[i]);
        f1[a[i]]++;
    }
    sort(a,a+n);
    vector<int>v1;
    for(auto s:s1) v1.push_back(s);

    int n1=v1.size();
    // for(auto v:v1) cout<<v<<" ";
    // cout<<endl;
    int mex=0;
    j=0;
    for(i=0;i<n1;i++){
        if(v1[i]==i){
            mex=i+1;
            j=i;
        }
        else{
            break;
        }
    }
    // vector<vector<int>>dp(n1+1,vector<int>(n1+1,1e18));
    
    vector<int>dp(n1+1,1e18);
    dp[j]=(mex)*(f1[v1[j]]-1)+v1[j];
    for(i=j-1;i>=0;i--){
        dp[i]=min(dp[i],(f1[v1[i]]-1)*mex+v1[i]);
        for(p=i+1;p<=j;p++){
            dp[i]=min(dp[i],(f1[v1[i]]-1)*(v1[p])+v1[i]+dp[p]);
        }
    }
    // for(i=0;i<=j;i++) cout<<dp[i]<<" ";
    // cout<<endl;
    int ans=dp[0];
    if(v1[0]!=0) ans=0;
    cout<<ans<<endl;





    for(i=0;i<n;i++){
        f1[a[i]]--;
    }

    }
}