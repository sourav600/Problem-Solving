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
    int n,q;
    cin>>n>>q;
    vl v(n);
    int odd=0,even=0;
    ll sum = 0;
    For(i,n){
        cin>>v[i];
        sum+=v[i];
        if(v[i]&1) ++odd;
        else ++even;
    }
    //cout<<even<<" "<<odd<<nl;
    For(i,q){
        int a,b;
        cin>>a>>b;
        if(a==0){
            sum += (b*even);
            if(b&1){
                odd += even;
                even = 0;
            }
        }
        else{
            sum += (b*odd);
            if(b&1){
                even += odd;
                odd=0;
            }
        }
        cout<<sum<<nl;
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