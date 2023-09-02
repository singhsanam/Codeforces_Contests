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
    cin>>n;
    int a[n];
    rep(i,0,n) cin>>a[i];
    p=1;
    for(i=1;i<n;i++){
        if(a[i-1]>=a[i]) p=0;
    }
    if(p==1){
        cout<<0<<endl;
        continue;
    }
    int pre[n+1]={0},suf[n+2]={0};
    pre[1]=1;
    for(i=1;i<n;i++){
        if(a[i-1]<=a[i]) c++;
        pre[i+1]=c+1;
    }
    c=0;
    for(i=n-2;i>=0;i--){
        if(a[i]>=a[i+1]) c++;
        suf[i+1]=c;
    }
    int ans=min(pre[n],suf[1]);
    for(i=1;i<n;i++){
        ans=min(ans,pre[i]+suf[i+1]);
    }
    cout<<ans<<endl;



    }
}