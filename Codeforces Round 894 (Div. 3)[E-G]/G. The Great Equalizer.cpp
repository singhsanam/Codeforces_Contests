/*You don't get to choose if you get hurt in this world...but you do have some say in who hurts you. I like my choices.*/

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
// #define int             long long
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
    int i,j,x=0,y=0,p=0,n,d,q=-1,u=0,v=0,k,c=0,m;
    cin>>n;
    int a[n];
    map<int,int>m1;
    set<int>s1;
    for(i=0;i<n;i++){
        cin>>a[i];
        m1[a[i]]++;
        s1.insert(a[i]);
    }
    multiset<int, greater<int> > mul1;
    if(n>1){
        i=0;
        int prev;
        for(auto s:s1){
            if(i>0){
                mul1.insert(s-prev);
            }
            prev=s;
            i++;
        }
    }
    cin>>q;
    while(q--){
        cin>>i>>x;
        if(n==1){
            cout<<x<<endl;
            continue;
        }

        i--;
        m1[a[i]]--;
        if(m1[a[i]]==0) {
            auto itr=s1.upper_bound(a[i]);
            if(itr!=s1.end()){
                mul1.erase(mul1.find(*itr-a[i]));
            }
            auto itl=s1.lower_bound(a[i]);
            if(itl!=s1.begin()){
                itl--;
                mul1.erase(mul1.find(a[i]-*itl));
                if(itr!=s1.end()){
                    mul1.insert(*itr-*itl);
                }
            }
            s1.erase(a[i]);
        }
        a[i]=x;
        m1[a[i]]++;
        if(m1[a[i]]==1){

            s1.insert(a[i]);
            auto itr=s1.upper_bound(a[i]);
            if(itr!=s1.end()){
                mul1.insert(*itr-a[i]);
            }
            auto itl=s1.lower_bound(a[i]);
            if(itl!=s1.begin()){
                itl--;
                mul1.insert(a[i]-*itl);
                if(itr!=s1.end()){
                    mul1.erase(mul1.find(*itr-*itl));
                }
            }
        } 

        auto itr=s1.end();
        itr--;
        int ans=*mul1.begin()+*itr;
        cout<<ans<<" ";
    }
    cout<<endl;


    }
}