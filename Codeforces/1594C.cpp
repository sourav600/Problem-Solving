#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long n;
    char ch;
    string s;
    cin>>n>>ch>>s;

    long long ct = count(s.begin(), s.end(), ch);
    if(ct==n) cout<<0<<"\n";
    else{
        bool one_it = false;
        for(int i=2; i<=n; ++i){
            for(int j=i-1; j<n; j+=i){
                if(s[j]==ch){
                    one_it = true;
                }
                else{
                    one_it = false;
                    break;
                }
            }
            if(one_it){
                cout<<1<<"\n"<<i<<"\n";
                return;
            }
        }
        cout<<2<<"\n"<<n<<" "<<n-1<<"\n";
    }
}

int main() {
   int t; cin>>t;
   while(t--) solve();
   return 0;
}
