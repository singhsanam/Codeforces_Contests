/*You don't get to choose if you get hurt in this world...but you do have some say in who hurts you. I like my choices.*/

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define int             long long
#define f               first
#define s               second
#define all(a)          a.begin(),a.end()
#define endl            "\n"
#define fill(a,b) memset(a, b, sizeof(a))
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
using namespace std;
void rec(int u,vector<vector<pair<int,int>>>&adj,vector<int>&dp){
    int max1=0;
    for(auto v:adj[u]){
        if(dp[v.f]==-1){
            rec(v.f,adj,dp);
        }
        max1=max(max1,v.s+dp[v.f]);
    }
    dp[u]=max1;
} 
signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
while(t--){
    int i,j,x=0,y=0,p=0,n,q=-1,u=0,v=0,k,c=0,m,w;
    cin>>n>>m>>k;
    int a[n+1];
    set<int>s1;
    int c1=0,c2=1e18;
    rep(i,1,n+1) {
        cin>>a[i];
        c1=max(c1,a[i]);
        c2=min(c2,a[i]);
        s1.insert(a[i]);
    }
    vector<vector<pair<int,int>>>adj(n+1);
    int in[n+1]={0},out[n+1]={0};
    for(i=0;i<m;i++){
        cin>>x>>y;
        w=a[y]-a[x];
        if(w<0) w+=k;
        // if(a[y]<a[x]) w=k;
        adj[x].push_back({y,w});
        in[y]++;
        out[x]++;
    }
    vector<pair<int,int>>v1;//in are zero
    vector<int>ins;
    for(i=1;i<=n;i++){
        if(in[i]==0){
            v1.push_back({a[i],i});
            ins.push_back(a[i]);
        }
    }
    sort(all(v1));
    sort(all(ins));
    vector<int>dp(n+1,-1);
    for(i=1;i<=n;i++){
        if(dp[i]==-1) rec(i,adj,dp);
        // cout<<dp[i]<<" ";
    }
    // cout<<endl;
    int max1=0;
    set<int, greater<int> > ss1;
    for(i=1;i<=n;i++){
        dp[i]+=a[i];
        max1=max(max1,dp[i]);
        // ss1.insert(dp[i]);
    }
    // for(auto v:s1) ins.push_back(v);
    int n1=ins.size(),n2=v1.size();
    j=0;
    int ans=1e18;
    for(i=0;i<n1;i++){
        while(j<n2&&v1[j].f<ins[i]){
            for(auto v:adj[v1[j].s]){
                max1=max(max1,dp[v.f]+k);
                // ss1.insert(dp[v.f]+k);
            }
            max1=max(max1,dp[v1[j].s]+k);

            // ss1.insert(dp[v1[j].f]+k);
            j++;
        }
        // cout<<max1<<" "<<ins[i]<<endl;
        ans=min(ans,max1-ins[i]);
    }
    // ans=max(ans);
    cout<<ans<<endl;







    }
}