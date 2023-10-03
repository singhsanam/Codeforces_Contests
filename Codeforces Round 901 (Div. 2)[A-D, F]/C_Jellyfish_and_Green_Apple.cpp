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
    n%=m;
    if(n==0){
        cout<<0<<endl;
        continue;
    }
    x=__gcd(n,m);
    n/=x;
    m/=x;
    int M=m;

    if(((M-1)&M)!=0){
        cout<<-1<<endl;
        continue;
    }
    int ans=0;
    for(i=0;i<=30;i++){
        int j=1<<i;
        if((j&n)>0) {
            y=m/j;
            ans+=(y-1)*j;
        }
    }
    ans=ans*x;
    cout<<ans<<endl;


    }
}