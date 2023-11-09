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

    ll n,w;
    cin>>n>>w;
    vi arr(n+1);
    For(i,n) cin>>arr[i];

    vector<ll> mn,mx;
    deque<ll> q1,q2;
    For(i,w){
        //for minimun sliding
        if(q1.empty()) q1.push_back(arr[i]);
        else{
            while(!q1.empty() && arr[i]<q1.back()) q1.pop_back();
            q1.push_back(arr[i]);
        }
        //for maximum sliding
        if(q2.empty()) q2.push_back(arr[i]);
        else{
            while(!q2.empty() && arr[i]>q2.back()) q2.pop_back();
            q2.push_back(arr[i]);
        }
    }

    ll l1=1,l2=1;
    mn.push_back(q1.front());
    mx.push_back(q2.front());
    for(int i=w+1; i<=n; ++i){
        //min window
        if(q1.empty()) q1.push_back(arr[i]);
        else if(arr[l1]==q1.front()) q1.pop_front();
        
        while(!q1.empty() && arr[i]<q1.back()){
             q1.pop_back();
        }
        q1.push_back(arr[i]);
        mn.push_back(q1.front());
        ++l1;

        //max window
        if(q2.empty()) q2.push_back(arr[i]);
        else if(arr[l2]==q2.front()) q2.pop_front();
        
        while(!q2.empty() && arr[i]>q2.back()){
            q2.pop_back();
        } 
        q2.push_back(arr[i]);
        mx.push_back(q2.front());
        ++l2;
    }
    for(auto it: mn) cout<<it<<" ";
    cout<<nl;
    for(auto it: mx) cout<<it<<" ";
    cout<<nl;
    for(int i=0; i<=n-w;++i){
        cout<<mx[i]-mn[i]<<" ";
    }

return 0;
}