#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define pb(x) push_back(x)
#define pi acos(-1)
typedef long long ll;
typedef unsigned long ulong;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    set<int> s;
    set<int>::iterator it;
    int t,n,x;
    cin>>t;
    while(t--){
        int check=0;
        cin>>n;
        int copy=n;
        For(i,n){
            cin>>x;
            if(x==0) {check=1; copy--;}
            else s.insert(x);
        }
        int count = copy-s.size();
        if(check==1) count += s.size();
        else if(count==0) count += s.size()+1;
        else count += s.size();
        cout<<count<<nl;
        s.clear();
    }
return 0;
}