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
    // cin>>n;
    string a,b;
    cin>>a;
    cin>>b;
    n=a.length();
    int ans=0;
    for(i=0;i<n-1;i++){
        if(a[i]=='0'&&a[i+1]=='1'&&b[i]=='0'&&b[i+1]=='1'){
            ans=1;
            break;
        }
    }
    if(ans==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


    }
}