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
    int i,j,x=0,y=0,p=0,n,q=-1,u=-1,v=-1,k,c=0,m;
    cin>>n;
    int a[n];
    rep(i,0,n) cin>>a[i];
    p=1;
    q=0;
    vector<int>v1;
    for(i=0;i<n;i++){
        p*=a[i];
        if(p>2*n) {
            q=1;
            p/=a[i];
        }
        if(a[i]>1&&u==-1) u=i;
        if(a[i]>1) v=i;
        if(a[i]>1) v1.push_back(i);
    }
    if(u==-1){
        cout<<1<<" "<<1<<endl;
        continue;
    }
    if(q==1){
        cout<<u+1<<" "<<v+1<<endl;
        continue;
    }
    int n1=v1.size();
    int pre[n+1],suf[n+2],mul[n+1];
    pre[0]=0;
    suf[n+1]=0;
    mul[0]=1;
    for(i=1;i<=n;i++){
        pre[i]=a[i-1]+pre[i-1];
        mul[i]=a[i-1]*mul[i-1];
    }
    for(i=n-1;i>=0;i--){
        suf[i+1]=a[i]+suf[i+2];
    }
    u=-1;
    v=-1;
    int max1=0;
    c=0;
    // cout<<n1<<endl;
    for(i=0;i<n1;i++){
        for(j=i;j<n1;j++){
            x=v1[i];
            y=v1[j];
            c=pre[x]+mul[y+1]/mul[x]+suf[y+2];
            // cout<<x<<" "<<y<<" "<<c<<endl;
            if(c>max1){
                max1=c;
                u=x+1;
                v=y+1;
            }
        }
    }
    cout<<u<<" "<<v<<endl;





    }
}