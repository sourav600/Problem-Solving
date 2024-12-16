#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long
const ll N = 1e6 + 10;

int vis[N];
vector<int> primes;

int divisorSum1(int n) {
    int sum = 0;
    for (int i = 1; i * i <= n; i++) {
        if (i * i == n) {
            sum += i;
        } else if (n % i == 0) {
            sum += (i + n/i);
        }
    }
    return sum;
}


void sieve(long long upper_bound) {

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

int divisorSum2(int n) {
    if (n < 1) return 0;
    // sieve(n+1);
    int sum = 1;
    for (int i = 0; primes[i]*primes[i] <= n; i++) {
        if (n % primes[i] == 0) {
            int cnt = 1;
            while (n % primes[i] == 0) {
                n /= primes[i];
                cnt++;
            }
            sum *= (pow(primes[i], cnt) - 1) / (primes[i] - 1);
        }
    }
    if (n > 1) sum *= (pow(n, 2) - 1) / (n - 1);
    /*
     * this is just a formula of a series (1 + p + p^2 + ... + p^n)
     * = ((p^(n+1)) - 1)/(p-1)
     */
    return sum;
}
int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    ll n; cin>>n;
    ll ans = 0;
    sieve(n+1);
    for(int i=1; i<=n; ++i){
        ans += divisorSum2(i);
    }
    cout<<ans;
return 0;
}



