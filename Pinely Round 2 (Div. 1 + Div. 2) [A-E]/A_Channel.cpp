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
    int a,Q;
    cin>>n>>a>>Q;
    string s;
    cin>>s;
    int c1=0,c2=0;
    for(i=0;i<Q;i++){
        if(s[i]=='+') c1++;
        else c2++;
    }
    p=0;
    q=0;
    if(c1+a>=n) p=1;//it is possible
    else{
        cout<<"NO"<<endl;
        continue;
    }
    int z=a,max1=a;

    for(i=0;i<Q;i++){
        if(s[i]=='+'){
            if(z<max1) z++;
            else{
                z++;
                max1++;
            }
        }
        else{
            z--;
        }
    }
    // cout<<max1<<endl;
    if(max1<n) q=1;
    else q=0;
    if(p==1&&q==1){
        cout<<"MAYBE"<<endl;
    }
    else if(p==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    }
}