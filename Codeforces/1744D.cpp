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

int getCount(int x){
    int count=0;
    while(x%2==0){
        ++count;
        x/=2;
    }
    return count;
}

void solve(int tc){
    int n; cin>>n;
    int count1=0,x,count2=0,need=0;
    vi repeat;
    For(i,n){
        cin>>x;
        count1 += getCount(x);
        int temp = getCount(i+1);
        count2 += temp;
        repeat.pb(temp);
    }
    if(count1>=n){
        cout<<0<<nl;
        return;
    }
    if(count1+count2 < n){
        cout<<-1<<nl;
        return;
    }
    sort(repeat.rbegin(),repeat.rend());
    int i=0;
    while(count1<n){
        count1 += repeat[i];
        ++i; ++need;
    }
    cout<<need<<nl;
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