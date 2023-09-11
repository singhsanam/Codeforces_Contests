/*You don't get to choose if you get hurt in this world...but you do have some say in who hurts you. I like my choices.*/

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define int             long long
#define all(a)          a.begin(),a.end()
#define f               first
#define s               second
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
    int a,b;
    cin>>n>>k>>a>>b;
    vector<pair<int,int>>v1;
    for(i=0;i<n;i++){
        cin>>x>>y;
        v1.push_back({x,y});
    }
    if(a<=k&&b<=k){
        cout<<0<<endl;
    }
    else if(a<=k){
        a--;
        b--;
        int ans=1e16;
        for(i=0;i<k;i++){
            ans=min(ans,abs(v1[i].f-v1[b].f)+abs(v1[i].s-v1[b].s));
        }
        cout<<ans<<endl;
    }
    else if(b<=k){
        a--;
        b--;
        int ans=1e16;
        for(i=0;i<k;i++){
            ans=min(ans,abs(v1[i].f-v1[a].f)+abs(v1[i].s-v1[a].s));
        }
        cout<<ans<<endl;
    }
    else{
        a--;
        b--;
        int min1=1e16,min2=1e16;
        for(i=0;i<k;i++){
            min1=min(min1,abs(v1[i].f-v1[a].f)+abs(v1[i].s-v1[a].s));
            min2=min(min2,abs(v1[i].f-v1[b].f)+abs(v1[i].s-v1[b].s));
        }
        int ans=abs(v1[a].f-v1[b].f)+abs(v1[a].s-v1[b].s);
        ans=min(ans,(min1+min2));
        cout<<ans<<endl;
    }



    }
}