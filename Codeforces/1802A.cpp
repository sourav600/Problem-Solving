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
    int positive=0,negative=0;
    For(i,n) {
        cin>>v[i];
        if(v[i]<0) ++negative;
        else ++positive;
    }

    int flag = 1;
    For(i,n){
        if(i+1 < positive) {
            cout<<flag++<<" ";
        }
        else cout<<flag--<<" ";
    }
    cout<<nl;

    int ct = 0;
    flag=0;
    For(i,n){
        if(i%2==0 || ct>=negative){
            cout<<++flag<<" ";
        }
        else if(ct<negative){
            cout<<--flag<<" ";
            ++ct;
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