/*You don't get to choose if you get hurt in this world...but you do have some say in who hurts you. I like my choices.*/

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define int             long long
// #define all(a)          a.begin(),a.end()
// #define endl            "\n"
// #define fill(a,b) memset(a, b, sizeof(a))
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
using namespace std;
               
signed main (){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    int t=1;
    cin>>t;
while(t--){
    int i,j,x=0,y=0,p=0,n,q=-1,u=0,v=0,k,c=0,m;
    cin>>n>>k;
    // int a[n];
    // rep(i,0,n) cin>>a[i];
    int z=0;
    vector<int>v1;
    vector<int>ind;
    for(i=1;i<=n-k+1;i+=k){
        cout<<"? "<<i<<endl;
        ind.push_back(i);
        cin>>x;
        z^=x;
        v1.push_back(x);
    }
    if(n%k==0){
        cout<<"! "<<z<<endl;
        continue;
    }
    int n1=ind.size();
    i=ind[n1-1]+1;
    for(j=i;j<=n-k+1;j++){
        cout<<"? "<<j<<endl;
        cin>>x;
        z^=x;
    }
    cout<<"! "<<z<<endl;
    }
}