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

    list<char> l;
    list<char>::iterator it;
    For(i,10) l.pb('a'+i);

    
    for(it=l.begin(); it!=l.end();it++) cout<<*it;
    cout<<nl;
    it=l.end(); it--;
    while(!l.empty()){
        cout<<*it;
        l.pop_back();
        it--;
    }


return 0;
}