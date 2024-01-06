#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define pb(x) push_back(x)
#define pi acos(-1)
typedef long long ll;
typedef unsigned long ulong;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t; cin>>t;
    For(j,t)
    {
        cout<<"Friend # "<<j+1<<" : ";
        int bd,bm,by,ed,em,ey;
        scanf("%d/%d/%d %d/%d/%d",&bd,&bm,&by,&ed,&em,&ey);
        int b=bd+(30*(bm-1));
        int e=ed+(30*(em-1));
        int count=0,check=0;
        while(count<=100){
            if(b==e) {count==0 ? cout<<"1\n" : cout<<count<<nl;check=1;break;}
            if(e>11)count++;
            e = (e-11)>0 ? e-11 : 360+(e-11);
        }
        if(check==0)cout<<"Bad Luck\n";
    }
return 0;
}