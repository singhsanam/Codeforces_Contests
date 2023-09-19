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
    int a[n];
    rep(i,0,n) cin>>a[i];
    vector<pair<int,int>>v1;
    for(i=0;i<n;i++){
        v1.push_back({a[i],i});
    }
    sort(all(v1));
    set<int>DR;//down right
    set<int>UL;// up left
    for(i=1;i<=n;i++){
        UL.insert(i);
        DR.insert(i);
    }
    int ans[k+1];
    for(i=0;i<=k;i++) ans[i]=-1;
    for(i=0;i<n;i++){
        auto dr=DR.end();
        dr--;
        int d=*dr;
        auto ul=UL.begin();
        int u=*ul;
        int x=d-u+1;
        if(ans[v1[i].first]==-1) ans[v1[i].first]=2*x;
        UL.erase(v1[i].second+1);
        DR.erase(v1[i].second+1);
    }
    for(i=1;i<=k;i++){
        if(ans[i]==-1) ans[i]=0;
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    }
}