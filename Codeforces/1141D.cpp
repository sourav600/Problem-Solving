#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define nl '\n'
#define pi acos(-1)
#define ll long long
#define For(i,n) for(ll i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define ordered_set tree<pair<int,int>, null_type,less<pair<int,int> >, rb_tree_tag,tree_order_statistics_node_update>

typedef unsigned long long  ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vl;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
const ll M = 1e9 + 7;
const ll N = 2e5 + 10;
vector<pair<int,int> > movements = { {+1,0},{-1,0},{0,+1},{0,-1} };
ll mod(ll a){ return ((a%M)+M)%M;}

void SOURAV(int tc){

}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n; cin>>n;
    cin.ignore();
    string s1, s2;  cin>>s1>>s2;

    vector<int> v1[26],v2[26], special1, special2;
    For(i,n){
        if(s1[i]=='?') special1.push_back(i+1);
        if(s2[i]=='?') special2.push_back(i+1);
        if(s1[i]!='?') v1[s1[i]-'a'].push_back(i+1);
        if(s2[i]!='?') v2[s2[i]-'a'].push_back(i+1);
    }

    int ct=0;
    vector<pair<int,int>> vp;

    For(i,26){
        while(!v1[i].empty() && !v2[i].empty()){
            vp.push_back({v1[i][0] , v2[i][0]});
            v1[i].erase(v1[i].begin());
            v2[i].erase(v2[i].begin());
        }
    }

    int unused1=0, unused2=0;
    For(i,26){
        unused1 += v1[i].size();
        unused2 += v2[i].size();
    }
    //cout<<unused1<<" "<<unused2<<nl;

    int ans = vp.size();
    int sz1 = special1.size(), sz2 = special2.size();
    //cout<<ct1<<" "<<ct2<<nl;
    ans += min(sz1, unused2);
    ans += min(sz2, unused1);
    int r1 = sz1 - min(sz1,unused2);
    int r2 = sz2 - min(sz2,unused1);
    //cout<<r1<<" "<<r2<<nl;

    cout<<ans+min(r1,r2)<<nl;
    For(i,vp.size()){
        cout<<vp[i].first<<" "<<vp[i].second<<nl;
    }
    int pos=0, it1=0;
    while(it1<special1.size() && unused2>0){
        bool ok = true;
        while(ok){
            if(v2[pos].empty()) ++pos;
            else{
                cout<<special1[it1]<<" "<<v2[pos][0]<<nl;
                v2[pos].erase(v2[pos].begin());
                --unused2;
                ok = false;
            }
        }
        ++it1;
    }
    pos = 0;
    int it2=0;
    while(it2<special2.size() && unused1>0){
        bool ok = true;
        while(ok){
            if(v1[pos].empty()) ++pos;
            else{
                cout<<special2[it2]<<" "<<v1[pos][0]<<nl;
                v1[pos].erase(v1[pos].begin());
                --unused1;
                ok = false;
            }
        }
        ++it2;
    }
    while(it1<special1.size() && it2<special2.size()){
        cout<<special1[it1++]<<" "<<special2[it2++]<<nl;
    }

return 0;
}



