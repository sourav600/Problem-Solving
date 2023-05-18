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
#define vpp vector<pair<int,int> >
#define pb(x) push_back(x)
#define pi acos(-1)
const ll INF = 1e9 + 7;
const ll N = 1e5 + 10;

vector<int> createLPS(string s){
    vector<int> lps(s.size());
    int index=0;
    for(int i=1; i<s.size(); ){
        if(s[index]==s[i]){
            lps[i] = index+1;
            ++index; ++i;
        }else{
            if(index!=0) index = lps[index-1];
            else lps[i] = index, ++i;
        }
    }
    return lps;
}

void solve(){


    int n,q;
    cin>>n>>q;
    cin.ignore();
    string s;
    cin>>s;

    int pos=0;
    while(q--){
        int x;
        cin>>x;
        if(x==1){
            int t; cin>>t;
            pos = (pos+t)%n;
            //cout<<pos<<"p "<<nl;
        }
        else if(x==2){
            int p; cin>>p;
            cout<<s[(p-pos+n-1)%n]<<nl;
        }
    }
}

int main(){
        #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif


    solve();

return 0;
}