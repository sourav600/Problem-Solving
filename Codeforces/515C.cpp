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
typedef unsigned long long ull;
const ll M = 1000000007;


int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    ll n,a; cin>>n>>a;
    string s="";
    while(a>0){
        switch (a%10)
        {
        case 2: s += "2";break;      
        case 3: s += "3";break;  
        case 4: s += "223";break;        
        case 5: s += "5";break;        
        case 6: s += "35";break;        
        case 7: s += "7";break;        
        case 8: s += "2227";break;        
        case 9: s += "2337";break;        
        default: s+=""; break;
        }
        a/=10;
    }
    //cout<<s<<nl;
    sort(s.rbegin(),s.rend());
    cout<<s<<nl;
    
return 0;
}