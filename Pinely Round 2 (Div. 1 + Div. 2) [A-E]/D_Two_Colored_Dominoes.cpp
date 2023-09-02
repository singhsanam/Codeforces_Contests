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
    char a[n][m];
    int b[n][m];
    vector<vector<int>>LR(m+1);
    vector<vector<int>>UD(n+1);

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
            b[i][j]=0;
            if(a[i][j]=='L'||a[i][j]=='U') c++;
            if(a[i][j]=='L'){
                LR[j].push_back(i);
            }
            if(a[i][j]=='U'){
                UD[i].push_back(j);
            }
        }
    }
    if(c%2==1){
        cout<<-1<<endl;
        continue;
    }
    int rs[m]={0},cs[n]={0};
    int ans=1;
    //1 means W
    //2 means B
    for(i=0;i<m;i++){
        int n1=LR[i].size();
        for(j=0;j<n1;j++){
            int k=LR[i][j];
            b[k][i]=1;
            b[k][i+1]=2;
            if(j%2==1) swap(b[k][i],b[k][i+1]);
        }
        if(n1%2==1){
            ans=0;
            break;
        }
    }
    if(ans==0){
        cout<<-1<<endl;
        continue;
    }
    for(i=0;i<n;i++){
        int n1=UD[i].size();
        for(j=0;j<n1;j++){
            int k=UD[i][j];
            b[i][k]=1;
            b[i+1][k]=2;
            if(j%2==1) swap(b[i][k],b[i+1][k]);
        }
        if(n1%2==1){
            ans=0;
            break;
        }
    }
    if(ans==0){
        cout<<-1<<endl;
        continue;
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            // cout<<b[i][j];
            if(b[i][j]==0) cout<<".";
            else if(b[i][j]==1) cout<<"W";
            else cout<<"B";
        }
        cout<<endl;
    }



    }
}