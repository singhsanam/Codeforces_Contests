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
    n=s.length();
    if(s[0]=='0'){
        cout<<"NO"<<endl;
        continue;
    }
    int c1=0,c2=0,up=0,down=n+1;
    stack<pair<int,int>>s1;
    pair<int,int> a[n+1];
    a[0]={0,n+1};
    int ans=1;
    for(i=0;i<n;i++){
        if(s[i]=='+'){
            c1++;
        }
        if(s[i]=='-'){
            c1--;
            // up=a[c1].first;
            down=a[c1].second;
            up=min(up,c1);
            // down=up+1;
        }
        if(s[i]=='1'){
            up=max(up,c1);
            if(up>=down){
                ans=-1;
                break;
            }
        }
        if(s[i]=='0'){
            if(c1<=1||c1<=up){
                ans=-1;
                break;
            }
            down=c1;
        }
        a[c1]={up,down};
    }
    if(ans==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


    }
}