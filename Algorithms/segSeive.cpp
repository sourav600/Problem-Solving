#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 32000
vector<ll> primes;

void seive(){
    vector<bool> isPrime(MAX, true);
    for(ll i=3; i*i<=MAX; i+=2){
        if(!isPrime[i]) continue;
        for(ll j=i*i; j<=MAX; j+=i){
            isPrime[j] = false;
        }
    }
    primes.push_back(2);
    for(ll i=3; i<MAX; i+=2){
        if(isPrime[i]) primes.push_back(i);
    }
    //for(ll i=0; i<10; ++i) cout<<primes[i]<<" ";

}

void segSiv(ll l, ll r){
    vector<bool> isPrime(r-l+1, true);
    if(l==1) isPrime[0] = false;
    for(ll i=0; primes[i]*primes[i] <= r; ++i){
        ll cur_p = primes[i];
        ll start = (l / cur_p)*cur_p;
        if(start < l) start += cur_p;
        for(ll j=start; j<=r; j += cur_p){
            isPrime[j-l] = false;
        }
        if(start==cur_p) isPrime[start-l] = true;
    }
    for(int i=0; i<r-l+1; ++i){
        if(isPrime[i]) cout<<(i+l)<<"\n";
    }
    cout<<"\n";
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    seive();
    int t; cin>>t;
    while(t--){
        ll l,r; cin>>l>>r;
        segSiv(l,r);
    }
    return 0;
}
