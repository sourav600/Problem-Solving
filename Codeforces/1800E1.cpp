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

void swap(char &a, char &b){
    char temp = a;
    a=b;
    b=temp;
}
void solve(int tc){
    int n,k; cin>>n>>k;
    cin.ignore();
    string s,t;
    cin>>s>>t;
    unordered_map<char,int> um;
    if(s==t) cout<<"YES\n";
    else{
        For(i,n){
            if(s[i]!=t[i]){
                um[s[i]]++;
                um[t[i]]++;
            }
        }
        for(auto it : um){
            if(it.second & 1){
                cout<<"NO\n";
                return;
            }
        }
        cout<<"YES\n";
    }
    // else{
    //     For(i,n-3){
    //         if(s[i]!=t[i]){
    //             if(s[i+3]==t[i]) swap(s[i],s[i+3]);
    //             else if(i+4<n && s[i+4]==t[i]) swap(s[i],s[i+4]);
    //             else{
    //                 cout<<"NO\n";
    //                 return;
    //             }
    //         }
    //         //cout<<s<<nl;
    //     }
    //     if(s==t) cout<<"YES\n";
    //     else cout<<"NO\n";
    // }
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