#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

int prefix[502][502];

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n,m;
    cin>>n>>m;
    string s[n+1];
    cin.ignore();
    int sum=0;
    for(int i=1; i<=n; ++i){
        cin>>s[i];
    }

    for(int i=1; i<=n; ++i){
        for(int j=0; j<m; ++j){
            if(s[i][j]=='a') break;
            if(s[i][j]=='='){
                sum+= prefix[i-1][j];
            }else if(s[i][j]=='O'){
                prefix[i][j] = prefix[i-1][j] + 1;
            }else{
                prefix[i][j] = prefix[i-1][j];
            }
        }
    }
    cout<<sum<<nl;

return 0;
}