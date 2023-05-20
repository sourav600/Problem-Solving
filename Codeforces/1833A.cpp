#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve(int tc){
    int n; cin>>n;
    cin.ignore();
    string s; cin>>s;
    set<string> st;
    for(int i=0; i<n-1; ++i){
        string temp = s.substr(i,2);
        //cout<<temp<<nl;
        st.insert(temp);
    }
    cout<<st.size()<<nl;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t,tc=1; cin>>t;
    while(t--)
    solve(tc++);

return 0;
}