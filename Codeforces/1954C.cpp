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
#define allr(x) x.rbegin(), x.rend()
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
//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
//int dx[]={2,1,-1,-2,-1,1};int dy[]={0,1,1,0,-1,-1}; //Hexagonal Direction
ll mod(ll a){ return ((a%M)+M)%M;}

void SOURAV(int tc){
    string s1,s2;
    cin>>s1>>s2;

    int n = s1.size();
    string c1,c2;
    c1 += s1[0];
    c2 += s2[0];

    bool equal = false;
    bool big1=false, big2=false;

    if(s1[0]==s2[0]) equal = true;
    else {
        if(s1[0]>s2[0]) big1 = true;
        else big2=true;

        equal = false;
    }

    for(int i=1; i<n; ++i){
        if(equal){
            c1 += s1[i];
            c2 += s2[i];
            if(s1[i]>s2[i]) {big1 = true; equal = false;}
            else if(s1[i]<s2[i]) {big2=true;equal = false;}


            continue;
        }

        if(!big1 && !big2) {
            c1 += s1[i];
            c2 += s2[i];
        }
        else{
            if(big1){
                if(s1[i]>s2[i]){
                    c1 += s2[i];
                    c2 += s1[i];
                }else{
                    c2 += s2[i];
                    c1 += s1[i];
                }
            }else{
                if(s1[i]>s2[i]){
                    c2 += s2[i];
                    c1 += s1[i];
                }else{
                    c1 += s2[i];
                    c2 += s1[i];
                }
            }
        }
    }
    cout<<c1<<nl<<c2<<nl;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t,tc=1; cin>>t;
    while(t--)
    SOURAV(tc++);

return 0;
}



