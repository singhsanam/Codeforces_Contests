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
    int a[n+1];
    a[0]=1e9;
    rep(i,1,n+1) cin>>a[i];
    cin>>k;
    vector<pair<int,int>>suf(n+2);
    suf[n]={a[n],n};
    suf[n+1]={n+1,n+1};
    int min1=a[n];
    for(i=n-1;i>=1;i--){
        min1=min(min1,a[i]);
        if(min1<suf[i+1].first){
            suf[i]={min1,i};
        }
        else{
            suf[i]=suf[i+1];
        }
    }
    int ans[n+1]={0};
    for(i=suf[1].second;i<=n;i++){
        int ind=suf[i].second;
        int p=k/suf[i].first;
        int x=suf[i].first;
        int l=0,r=p;
        int y=p;
        if(i<n){
            while(l<=r){
                int mid=(l+r)/2;
                int z=(k-x*mid)/suf[i+1].first;
                if(mid+z==p){
                    y=mid;
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
        }
        k-=y*x;
        // k%=suf[i].second;
        ans[ind]=y;
        i=suf[ind+1].second-1;
    }
    // for(i=1;i<=n;i++){
    //     cout<<suf[i].first<<" "<<suf[i].second<<endl;
    // }
    c=0;
    for(i=n;i>=1;i--){
        c+=ans[i];
        ans[i]=c;
    }
    for(i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;




    }
}