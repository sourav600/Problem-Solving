#include<bits/stdc++.h>
#include<algorithm>
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
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    int t; cin>>t; 
    int n,h,m;
    while(t--){
        cin>>n>>h>>m;
        int sleep=(h*60)+m;
        int h1,m1,time=INT_MAX;
        while(n--){
            cin>>h1>>m1;
            
            int alarm=(h1*60)+m1;
            if(sleep<=alarm) time = min(time,alarm-sleep);
            else time = min(time, (1440-(sleep-alarm)));
        }
        cout<<time/60<<" "<<time%60<<nl;

    }
return 0;
}