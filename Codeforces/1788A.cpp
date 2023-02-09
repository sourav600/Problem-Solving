#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;
#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define mi map<int,int>
#define umi unordered_map<int,int>
#define pb(x) push_back(x)
#define pi acos(-1)
const ll M = 1000000007;

void solve(int tc){
    int n; cin>>n;
    vi v(n);
    int ct2=0;
    For(i,n){
        cin>>v[i];
        if(v[i]==2) ct2++;
    }
    if(ct2==0) cout<<1<<nl;
    else if(ct2 % 2) {cout<<-1<<nl;}
    else{
        int idx=0;
        ct2 /= 2;
        int i=0;
        while(ct2){
            if(v[i++] == 2) --ct2;
            idx=i;
        }
        cout<<idx<<nl;
    } 
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    int t,tc=1; cin>>t;
    while(t--)
    solve(tc++);

return 0;
}