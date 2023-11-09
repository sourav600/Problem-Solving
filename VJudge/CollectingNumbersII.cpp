#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;
#define nl '\n'
#define For(i,n) for(int i=1; i<=n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define mi map<int,int>
#define umi unordered_map<int,int>
#define vpp vector<pair<int,int> >
#define pb(x) push_back(x)
#define pi acos(-1)
const ll INF = 1e9 + 7;
const ll N = 1e5 + 10;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n,m;
    cin>>n>>m;
    vi v(n+1);
    For(i,n) cin>>v[i];
    int looking = 1;
    int round=0;
    
    while(looking < n){
        ++round;
        For(i,n){
            if(v[i]==looking){
                ++looking;
                if(looking>n) break;
            }
        }
    }
    //cout<<round<<nl;
    int a,b;

    For(i,m){
        cin>>a>>b;
        a = min(a,b);
        b = max(a,b);
        if(a==b){
            cout<<round<<nl;
            continue;
        }
        if(a+1==b && ((v[a]==1 && v[b]==n)||(v[a]==n && v[b]==1))){
            cout<<round<<nl;
            swap(v[a],v[b]);
            continue;
        }
        if(a==1 && b==n){
            if(v[a]==n && v[b]==1) round-=2;
            else if(v[a]==1 && v[b]==n) round+=2;
        }
        else if(v[a] > v[b]){
            --round;
        }
        else{
            ++round;
        }
        swap(v[a],v[b]);
        cout<<round<<nl;
    }

return 0;
}