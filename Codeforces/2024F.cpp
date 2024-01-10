#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define pi acos(-1)
#define ll long long
#define For(i,n) for(ll i=0; i<n; i++)
const ll M = 1e9 + 7;
const ll N = 2e5 + 10;


bool mark[N];
vector<ll> primes;
void seive(){
    for(ll i=3; i*i<=N; i+=2){
        if(mark[i]==0){
            for(ll j=i*i; j<N; j += (i+i)){
                mark[j] = 1;
            }
        }
    }

    primes.push_back(2);
    for(ll i=3; i<N; i+=2){
        if(mark[i]==0) primes.push_back(i);
    }
}



int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n,m; cin>>n>>m;
    int arr[n][m], brr[n][m];
    For(i,n){
        For(j,m) cin>>arr[i][j];
    }
    seive();
    For(i,n){
        For(j,m){
            int it = lower_bound(primes.begin(), primes.end(),arr[i][j]) - primes.begin();
            brr[i][j] = primes[it];
        }
    }

    int mn = INT_MAX;

    For(i,n){
        int temp = 0;
        For(j,m){
            temp += brr[i][j] - arr[i][j];
        }
        mn = min(mn, temp);
    }
    For(i,m){
        int temp = 0;
        For(j,n){
            temp += brr[j][i] - arr[j][i];
        }
        mn = min(mn, temp);
    }
    cout<<mn<<nl;

return 0;
}



