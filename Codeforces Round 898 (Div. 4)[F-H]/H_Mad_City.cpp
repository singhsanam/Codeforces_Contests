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
vector<vector<int>>adj;
vector<int>vis;    
vector<int>par;     
int st=-1,en=-1;
void rec(int u,int pars){
    if(st!=-1) return ;
    vis[u]=1;
    for(auto v:adj[u]){
        if(v==pars || st!=-1) continue;
        if(vis[v]!=0){
            st=u;
            en=v;
        }
        else{
            par[v]=u;
            rec(v,u);
        }
    }
}    
vector<int> cycle(){
    vector<int>v1;
    while(st!=en){
        v1.push_back(st);
        st=par[st];
    }
    v1.push_back(en);
    return v1;
}      
vector<int>m1;
int dd=0,u1,k=2;
void dist(int u,int pars,int p){
    if(m1[u]!=0) {
        dd=p;
        u1=u;
        return;
    }
    for(auto v:adj[u]){
        if(v!=pars){
            dist(v,u,p+1);
        }
    }
}
signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
while(t--){
    int i,j,x=0,b,a,y=0,p=0,n,q=-1,u=0,v=0,k,c=0,m;
    cin>>n>>a>>b;
    st=-1;
    en=-1;
    adj.clear();
    par.clear();
    vis.clear();
    m1.clear();
    m1.resize(n+1,0);
    adj.resize(n+1);
    vis.resize(n+1,0);
    par.resize(n+1,0);

    for(i=0;i<n;i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    if(a==b){
        cout<<"NO"<<endl;
        continue;
    }
    rec(1,0);

    vector<int>cyc=cycle();
    int n1=cyc.size();
    c=1;
    for(auto v:cyc){
        m1[v]=c++;
    }
    if(m1[b]!=0){
        cout<<"YES"<<endl;
        continue;
    }
    //  b is not in cycle

    int d1=0,d2=0,v1,v2;
    if(m1[a]==0){//it will run if a is not in cycle
        u1=-1;
        dd=0;
        dist(a,0,0);
        d1=dd;
        v1=u1;
    }

    u1=-1;
    dd=0;
    dist(b,0,0);
    v2=u1;
    d2=dd;
    if(d1==0){// it will dun if a is in cycle
        int z=min(abs(m1[a]-m1[v2]),n1-abs(m1[a]-m1[v2]));
        if(d2<z){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{// no one is at cycle
        int z=d1+min(abs(m1[v1]-m1[v2]),n1-abs(m1[v1]-m1[v2]));
        if(d2<z){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }




    }
}