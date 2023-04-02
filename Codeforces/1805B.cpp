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
    cin.ignore();
    string s1,s2;
    cin>>s1;
    s2=s1;
    char tar=s1[0];
    int i,pos = 0;

    sort(s2.begin(),s2.end());
    //cout<<s1<<" "<<s2<<nl;
    for(i=0; i<n; i++){
        if(s1[i]!=s2[i]) {
            tar = s2[i];
            break;
        }

    }
    //cout<<tar<<i<<nl;
    if(tar > s1[0]) {
        cout<<s1<<nl;
        return;
    }
    for(int j=i; j<n;++j){
        if(s1[j]==tar){
            pos=j;
        }
    }
    //cout<<pos<<nl;

    cout<<s1[pos];
    for(i=0; i<n; i++){
        if(i==pos) continue;
        cout<<s1[i];
    }
    cout<<nl;
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