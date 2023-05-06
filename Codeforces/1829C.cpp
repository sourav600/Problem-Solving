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

void solve(int tc){
    int n; 
    bool power1=false, power2=false;
    map<int,string> m,m1,m2;
    cin>>n;
    For(i,n){
        int x;
        string s;
        cin>>x;
        cin.ignore();
        cin>>s;
        if(s=="00") continue;
        else if(s=="11") {
            m[x]=s;
            power1=power2=true;
        }
        else if(s=="10") {
            m1[x]=s;
            power1=true;
        }
        else if(s=="01") {
            m2[x]=s;
            power2=true;
        }
    }

    if(power1 && power2){
        int mn = INT_MAX;
        auto it=m.begin();
        if(m.size()>0) mn = min(mn,it->first);
        if(m1.size()>0 && m2.size()>0){
            auto it1=m1.begin(), it2 = m2.begin();
            mn = min(mn, (it1->first) + (it2->first));
        }
        cout<<mn<<nl;
    }
    else {
        cout<<-1<<nl;
    }

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