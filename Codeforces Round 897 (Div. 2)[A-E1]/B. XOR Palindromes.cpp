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
    string s;
    cin>>s;
    for(i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]) c++;
        else p+=2;
    }
    string ans="";
    for(i=0;i<c;i++) {
        ans+='0';
    }
        // cout<<0;
    if(n%2==0){
        p=1;
        for(i=c;i<=n;i++){
            if(p==1) {
                ans+='1';
                // cout<<1;
                p=0;
            }
            else {
                ans+='0';
                p=1;
                // cout<<0;
            }
        }
        // cout<<endl;
    }
    else{
        for(i=c;i<=n;i++){
            ans+='1';
            // cout<<1;
        }
        // cout<<endl;
    }
    for(i=n;i>=n-c+1;i--){
        ans[i]='0';
    }
    cout<<ans<<endl;

    



    }
}