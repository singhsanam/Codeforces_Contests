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
    cin>>n>>m;
    if(m==1){
        cout<<0<<endl;
        for(i=0;i<n;i++) cout<<0<<endl;
        continue;
    }
    // for(i=0;i<m;i++){
    //     a[i]=i;
    // }
    vector<vector<int>>v1;
    int z=m-1;
    int z1=m-1;
    vector<int>a;
    for(i=0;i<m;i++) a.push_back(i);
    vector<int>prev;
    int ans=0;
    for(i=0;i<n;i++){
        vector<int>v2;
        z=z1;
        if(z1==0){
            v1.push_back(prev);
            c++;
            continue;
        }
        for(j=0;j<m;j++){
            v2.push_back(a[z]);
            z=(z+1)%(m);
        }
        ans++;
        v1.push_back(v2);
        c++;
        prev=v2;
        z1--;
    }
    cout<<ans+1<<endl;
    // cout<<c<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<v1[i][j]<<" ";
        }
        cout<<endl;
    }




    }
}