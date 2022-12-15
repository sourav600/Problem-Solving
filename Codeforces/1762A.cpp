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
    vi v(n);
    int mini=INT_MAX,sum=0;
    For(i,n) {
        cin>>v[i];
        sum+=v[i];
    }
    if(sum%2==0){
        cout<<0<<nl;
        return;
    }
    For(i,n){
        int temp = v[i],count=0,sum1=sum;
        while(sum1%2){
            sum1 -= temp;
            temp = temp/2;
            sum1 += temp;
            count++;
        }
        //cout<<count<<nl;
        mini = min(mini,count);
    }
    cout<<mini<<nl;
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