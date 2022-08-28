#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define mi map<int,int>
#define umi unordered_map<int,int>
#define pb(x) push_back(x)
#define pi acos(-1)
typedef long long ll;
typedef unsigned long ulong;
const ll M = 1000000007;

ll mod(ll a){
    return ((a%M)+M)%M;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    int t,n,m,s1,s2,d;
    cin>>t;
    while(t--){
        cin>>n>>m>>s1>>s2>>d;
        int arr[n][m];
        int p=s1+d;
        int q=s2+d;
        int r=s1-d;
        int s=s2-d;
        if(d==0)
        {
            if(s>=1 && n>p || 1<=r && m>q) cout<<n+m-2<<nl;
            else cout<<"-1\n";
        }
        else
        {
            if(s>1 && n>p || 1<r && m>q) cout<<n+m-2<<nl;
            else cout<<"-1\n";
        }
    }
return 0;
}

