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
    string s;
    cin>>s;
    n=s.size();
    vector<int>v1;
    v1.push_back(0);
    for(i=0;i<n;i++){
        if(s[i]=='B') v1.push_back(i+1);
        else c++;
    }
    v1.push_back(n+1);
    int ans=n;
    int n1=v1.size();
    for(i=1;i<n1;i++){
        ans=min(ans,v1[i]-v1[i-1]-1);
    }
    ans=c-ans;
    cout<<ans<<endl;



    }
}