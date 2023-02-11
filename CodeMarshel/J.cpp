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
    int a,b,c,k;
    cin>>a>>b>>c>>k;
    cout<<"Case "<<tc<<": ";
    int sum=a+b+c;
    if(a==b && b==c && a==c) {cout<<"Peaceful\n"; return;} 
    if(sum%3){
        cout<<"Fight\n";
    }
    else {
        int count=0;
        int m,n,p;
        m = (sum/3)-a;
        n = (sum/3)-b;
        p = (sum/3)-c;
        if(abs(m)%k==0 && abs(n)%k==0 && abs(p)%k==0 && m+n+p==0) cout<<"Peaceful\n";
        else cout<<"Fight\n";
    }
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif

    int t,tc=1; cin>>t;
    while(t--)
    solve(tc++);

return 0;
}