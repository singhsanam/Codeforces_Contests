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
vector<int>a;
vector<int>b;
int ans=1;
int k;
void rec(int u,vector<int>&vis,int st,int p){ 
    int v=a[u];
    b[u]=p;
    vis[u]=st;
    if(vis[v]!=0){
        if(vis[v]==st){
            ans=(ans&((b[u]-b[v]+1)==k));  
        }
        return;
    }
    rec(v,vis,st,p+1);
}
signed main (){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
while(t--){
    int i,j,x=0,y=0,p=0,n,q=-1,u=0,v=0,c=0,m;
    cin>>n>>k;
    a.clear();
    a.resize(n+1); // remember to put base cases for k=1 and k=n
    b.clear();
    b.resize(n+1);
    a[0]=0;
    ans=1;
    for(i=1;i<=n;i++){
        cin>>a[i];
        if(i==a[i] && k>1) ans=0;
    }
    // if(k==n) sort(all(a));
    if(k==1){
        for(i=1;i<=n;i++){
            if(a[i]!=i) ans=0;
        }
        if(ans==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        continue;
    }
    if(ans==0){
        cout<<"NO"<<endl;
        continue;
    }
    vector<int>vis(n+1,0);
    for(i=1;i<=n;i++){
        if(vis[i]==0) rec(i,vis,i,1);
    }

    if(ans==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }



    }
}