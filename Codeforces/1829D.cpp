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
    ll n,m;
    cin>>n>>m;
    if(n==m){cout<<"YES\n"; return;}
    if(n%3!=0 || n<m){
        cout<<"NO\n";
    }
    else {
        
        stack<int> st;
        st.push(n);

        while(!st.empty()){
            int cur = st.top();
            //cout<<cur<<nl;
            if(cur==m) {
                cout<<"YES\n";
                return;
            }
            st.pop();
            if(cur%3) continue; 
            int a=cur/3;
            int b=cur-a;
            st.push(a);
            st.push(b);
        }
        cout<<"NO\n";
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
