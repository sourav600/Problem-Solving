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
    deque<int> q;
    bool ck1=false, ck2=true;
    //int ck1 = 0, ck2=0;
    cin.ignore();
    string s; cin>>s;
    for(int i=0; i<n; ++i){
        q.push_back(s[i]-'0');
    }
    while(q.size()>=2){
        if(q.front()==q.back()){
            q.pop_back();
            q.pop_front();
            if(ck1) ck2=false;
        }
        else{
            if(ck2){
                q.pop_back();
                q.pop_front();
                ck1=true;
            }
            else {
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
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