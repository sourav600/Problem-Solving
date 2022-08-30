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

void solve(int tc){
    unordered_map<string, int> um1,um2,um3;
    vs v;
    int n; cin>>n;
    string s;
    int man1=0,man2=0,man3=0;
    For(i,n){cin>>s; um1[s]++;v.pb(s);}
    For(i,n){cin>>s; um2[s]++;v.pb(s);}
    For(i,n){cin>>s; um3[s]++;v.pb(s);}
    int k=0;
    For(i,n){
        string temp=v[k++];
        if((um2[temp]==0) && (um3[temp]==0)) man1+=3;
        else if((um2[temp]==0) || (um3[temp]==0)) man1+=1;
    }
    For(i,n){
        string temp=v[k++];
        if((um1[temp]==0) && (um3[temp]==0)) man2+=3;
        else if((um1[temp]==0) || (um3[temp]==0)) man2+=1;
    }
    For(i,n){
        string temp=v[k++];
        if((um1[temp]==0) && (um2[temp]==0)) man3+=3;
        else if((um1[temp]==0) || (um2[temp]==0)) man3+=1;
    }
    cout<<man1<<" "<<man2<<" "<<man3<<nl;
    v.clear(); um1.clear(); um2.clear(); um3.clear();
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif

    int t,tc=1; cin>>t;
    while(t--)
    solve(tc++);

return 0;
}