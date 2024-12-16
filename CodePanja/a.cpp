#include<bits/stdc++.h>

using namespace std;

#define nl '\n'

void SOURAV(int tc){
    cin.ignore();

    string s; cin>>s;
        // cout<<s<<nl;
    int n = 0;
    for(int i=0; i<s.size(); ++i){
        n += (s[i]-'0');
        n = n%3;
    }
    (n%3 == 0) ? cout<<"YES\n" : cout<<"NO\n";
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t,tc=1; cin>>t;
    while(t--)
    SOURAV(tc++);

return 0;
}



