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

ll sumDigit(ll x){
    ll sum=0;
    while(x>0){
        sum=sum+(x%10);
        x=x/10;
    }
    //cout<<"SUM: "<<sum<<nl;
    return sum;
}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    int t,tc=1; cin>>t;
    while(t--){
        ll n; cin>>n;
        ll num=n; 
        ll half = sumDigit(n)/2;
        ll div = 1;
        while(half>0){
            int x = n%10;
            if(x<=half) {n = n/10; half-=x; div*=10;}
            else {n-=half; half=0;}
        }
        n *=div;
        cout<<n<<" "<<num-n<<nl;
    }

return 0;
}