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
    cin>>t;
while(t--){
    int i,j,x=0,y=0,p=0,n,q=-1,u=0,v=0,k,c=0,m;
    cin>>n>>k;
    int b[n];
    rep(i,0,n){
        cin>>b[i];
    }
    int a[n];
    rep(i,0,n) cin>>a[i];
    vector<int>cor(n,0);
    vector<vector<int>>v1;
    vector<int>v2;
    for(i=0;i<n-1;i++){
        if(a[i]%a[i+1]==0) {
            cor[i]=1;
        }
    }
    for(i=0;i<n;i++){
        if(cor[i]==1){
            v2.push_back(b[i]);
        }
        if(cor[i]==0){
            v2.push_back(b[i]);
            v1.push_back(v2);
            v2.clear();
            p=0;
        }
    }
    int n1=v1.size();

    int ans=0;
    for(i=0;i<n1;i++){
        if(v1[i].size()<1) continue;
        int n2=v1[i].size();
        int l=0,r=0;
        c=0;
        int pre[n2+1]={0};
        for(j=0;j<n2;j++){
            pre[j+1]=pre[j]+v1[i][j];
        }
        for(j=0;j<n2;j++){
            int u=upper_bound(pre,pre+n2+1,pre[j]+k)-pre;
            u--;
            ans=max(ans,u-j);
        }
    }
    cout<<ans<<endl;
    }
}