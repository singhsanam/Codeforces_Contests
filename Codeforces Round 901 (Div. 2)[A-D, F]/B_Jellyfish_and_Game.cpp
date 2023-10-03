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
    cin>>n>>m>>k;
    int a[n],b[m];
    int c1=0,c2=0;
    for(i=0;i<n;i++) {
        cin>>a[i];
        c1+=a[i];
    }
    for(i=0;i<m;i++) {
        cin>>b[i];
        c2+=b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    if(k%2==1){
        int ans=max(c1,c1+b[m-1]-a[0]);
        cout<<ans<<endl;
    }
    else{
        if(a[0]<b[m-1]){
            swap(a[0],b[m-1]);
            sort(a,a+n);
            sort(b,b+m);
        }
        if(b[0]<a[n-1]){
            swap(b[0],a[n-1]);
            sort(a,a+n);
            sort(b,b+m);
        }
        c1=0;
        for(i=0;i<n;i++) c1+=a[i];
        int ans=c1;
        cout<<ans<<endl;
    }




    }
}