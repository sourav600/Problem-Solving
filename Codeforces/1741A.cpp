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
    string s1,s2;
    cin>>s1>>s2;
    int a=s1.size(),b=s2.size();


    if(s1[a-1]>s2[b-1]){
        cout<<"<"<<nl;
    }
    else if(s1[a-1]<s2[b-1]){
        cout<<">"<<nl;
    }
    else{
        if(a==b) cout<<"=\n";
        else if(s1[a-1]=='S'){
            if(a>b)cout<<"<\n";
            else cout<<">\n";
        }
        else {
            if(a>b) cout<<">\n";
            else cout<<"<\n";
        }
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