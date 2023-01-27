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
    int arr[n][n-1];
    int first;
    unordered_map<int ,int> um;
    unordered_map<int ,int>::iterator it;
    For(i,n){
        For(j,n-1) cin>>arr[i][j];
    }
    For(i,n){
        int x = arr[i][0];
        um[x]++;
    }
    for(it=um.begin();it!=um.end();++it){
        if(it->second==n-1) first = it->first;
    }
    cout<<first<<" ";
    For(i,n){
        int x = arr[i][0];
        if(x!=first) {
            for(int j=0;j<n-1;++j) cout<<arr[i][j]<<" ";
            break;
        }
    }
    cout<<nl;
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