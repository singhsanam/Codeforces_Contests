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
// double rec1(vector<double>v1){
//     if(v1.size()==0) return 0;
//     if(v1.size()<=2){
//         double n1=(int)v1.size();
//         return v1[0]/n1;
//     }
//     int n2=v1.size();
//     double sum=v1[0]/(double)n2;
//     for(int i=1;i<n2;i++){
//         vector<double>v2;
//         for(int j=1;j<n2;j++){
//             if(j!=i) v2.push_back(v1[j]);
//         }
//         sum+=rec1(v2)/(double)n2;
//     }
//     return sum;
// }
int n1=5000;
    vector<vector<double>>DP(n1+1,vector<double>(n1+1,0));
void rec(int u,vector<vector<double>>&adj,vector<double>&dp,vector<int>&vis){
    if(vis[u]!=-1) return;
    double max1=0;
    vector<double>v1;
    
    for(auto v:adj[u]){
        rec(v,adj,dp,vis);
        v1.push_back(dp[v]);
    }
    sort(v1.rbegin(),v1.rend());
    vis[u]=1;
    int n2=v1.size();
    if(v1.size()==0) return;

    for(int i=1;i<=n2;i++){
        int l=i-1;
        int r=n2-i;
        dp[u]+=DP[l][r]*v1[i-1];
        // cout<<DP[l][r]<<" ";
    }
    // cout<<endl;
    // dp[u]=rec1(v1);
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
    // int n1=5000;
    // vector<vector<int>>DP(n1+1,vector<int>(n1+1,0));
    for(int r=0;r<=n1;r++){
        DP[0][r]=1/(double)(r+1);
    }
    for(int l=1;l<=n1;l++){
        for(int r=0;r<=n1;r++){
            double x=0,y=0;
            if(l>=2) x=(l-1)*DP[l-2][r];
            if(r>=1) y=r*DP[l-1][r-1];
            DP[l][r]=(x+y)/(double)(l+r+1);
        }
    }
    // for(int l=0;l<=4;l++){
    //     for(int r=0;r<=4;r++){
    //         cout<<l<<" "<<r<<" "<<DP[l][r]<<endl;
    //     }
    // }
while(t--){
    int i,j,x=0,y=0,p=0,n,q=-1,u=0,v=0,k,c=0,m;
    cin>>n>>m;
    vector<vector<double>>adj(n+1);

    for(i=0;i<m;i++){
        cin>>x>>y;
        adj[x].push_back(y);
    }

    vector<double>dp(n+1,0);
    vector<int>vis(n+1,-1);
    dp[n]=1;
    vis[n]=1;
    rec(1,adj,dp,vis);

    cout<<fixed<<setprecision(12)<<dp[1]<<endl;


    }
}
