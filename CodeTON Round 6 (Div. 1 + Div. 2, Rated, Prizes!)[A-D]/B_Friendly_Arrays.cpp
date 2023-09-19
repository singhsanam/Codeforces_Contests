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
    int a[n];
    int b[m];
    rep(i,0,n) cin>>a[i];
    rep(i,0,m) cin>>b[i];
    
    // int x1=0,x2=0;
    // for(i=0;i<n;i++){
    //     x1^=a[i];
    // }
    int z=b[0];
    for(i=0;i<m;i++){
        z|=b[i];
    }
    int x1=0,x2=0;
    if(n%2==1){
        for(i=0;i<n;i++){
            x2^=a[i];
            a[i]|=z;
            x1^=a[i];
        }

    }
    else{
        for(i=0;i<n;i++){
            x2^=a[i];
            a[i]|=z;
            x1^=a[i];
        }
        swap(x1,x2);
    }
    swap(x1,x2);
    cout<<x1<<" "<<x2<<endl;


    




    }
}