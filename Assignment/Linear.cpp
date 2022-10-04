#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define mi map<int,int>
#define umi unordered_map<int,int>
#define pb(x) push_back(x)
#define pi acos(-1)
typedef long long ll;
typedef unsigned long ulong;
const ll M = 1000000007;


int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif

    cout<<"Enter array elemnets (Integer): ";
    vi v;
    int n;
    while(cin>>n && getchar()!='\n') v.pb(n);
    cout<<"Enter value to find: ";
    int x,check=0; cin>>x;
    For(i,v.size()){
        if(v[i]==x) {cout<<x<<" found at positon "<<i+1<<nl; check=1; break;}
    }
    if(check==0)cout<<"Not Found\n";
return 0;
}