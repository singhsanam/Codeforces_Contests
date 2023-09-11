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
    int a[n];
    rep(i,0,n) cin>>a[i];
    for(i=0;i<n;i++){
        c+=a[i];
    }
    if(c%n!=0){
        cout<<"No"<<endl;
        continue;
    }
    c/=n;
    sort(a,a+n);
    int ans=1,eq=0;
    vector<int>give;
    vector<int>take;
    
    for(i=n-1;i>=0;i--){
        int fl=1;
        int x=a[i]-c;
        if(x<0) {
            fl=0;
            x=abs(x);
        }
        int l=-1,r=-1;
        if(x==0){
            eq++;
            continue;
        }
        for(j=0;j<30;j++){
            int p=1<<j;
            if((x&p)>0){
                if(l==-1) l=p;
                r=p;
            }
        }
        int z=(((r-1)^(l-1))|r);
        // cout<<i<<" "<<x<<" "<<z<<endl;
        if(x!=z) ans=0;
        r=2*r;
        if(fl==0) swap(l,r);
        give.push_back(r);
        take.push_back(l);
    }
    sort(all(give));
    sort(all(take));
    int n1=give.size();
    for(i=0;i<n1;i++){
        // cout<<give[i]<<" "<<take[i]<<endl;
        if(give[i]!=take[i]) ans=0;
    }

    if(ans==1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }


    }
}