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



int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    int h,d,n, mn=INT_MAX;
    cin>>h>>d>>n;
    int cost, cities;
    For(i,n){
        cin>>cost>>cities;
        vi ar(cities);
        For(i,cities) cin>>ar[i];
        int a = find(ar.begin(),ar.end(),h)-ar.begin();
        int b = find(ar.begin(),ar.end(),d)-ar.begin();
        //cout<<a<<" "<<b<<nl;
        if(ar[cities-1]==h && ar[0]==d) mn = min(cost,mn);
        else if(a<b) mn = min(cost,mn);
    }
    if(mn==INT_MAX) cout<<-1<<nl;
    else cout<<mn<<nl;
    
return 0;
}