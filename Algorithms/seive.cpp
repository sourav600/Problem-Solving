#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long
const ll N = 2e5 + 10;

int vis[N];
vector<int> primes;

void sieve(long long upper_bound) {
    primes.erase(primes.begin(), primes.end());

    vis[0] = vis[1] = true;
    primes.push_back(2);
    for(long long i = 3; i <= upper_bound +1; i += 2) {
        if(!vis[i]) {
            for(long long j = i * i; j <= upper_bound +1; j += 2*i)
                vis[j] = true;
            primes.push_back((int) i);
        }
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    sieve(100);
    for(auto it: primes) cout<<it<<nl;
return 0;
}



