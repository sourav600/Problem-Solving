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
const int M = 1337; //M is not prime (7*191)

int binExpIter(int a, int b){
    int ans=1;
    while(b){
        if(b&1) ans = (ans*1LL*a)%M;
        a = (a*1LL*a)%M;
        b>>=1;
    }
    return ans;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vi v;
    int a,x;
    cin>>a;
    while(cin>>x) v.pb(x);
    int b = 0, temp=1;
    for(int i=v.size()-1; i>=0; --i){
        b += (v[i]*1LL*temp) % 1140;    //1337*(1-1/7)*(1-1/191) = 1140 
        temp = (temp*1LL*10)%1140;  //temp *= 10
    }
    cout<<binExpIter(a,b)<<nl;
return 0;
}