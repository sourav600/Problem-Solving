#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long
const ll N = 2e5 + 10;

int vis[N];
vector<int> primes;

int countDivisor1(int n) {
    int divisor = 0;
    for (int i = 1; i * i <= n; i++) {
        if (i * i == n) {
            divisor += 1;
        } else if (n % i == 0) {
            divisor += 2;
        }
    }
    return divisor;
}

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

int countDivisor2(int n) {
    if (n < 1) return 0;
    int sqrn = (int) sqrt(n);
    sieve(n+1);
    int divisor = 1;
    for (int i = 0; primes[i]*primes[i] <= n; i++) {
        if (n % primes[i] == 0) {
            int cnt = 1;
            while (n % primes[i] == 0) {
                n /= primes[i];
                cnt++;
            }
            divisor *= cnt;
        }
    }
    if (n > 1) divisor *= 2;
    return divisor;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    cout<<countDivisor1(18)<<nl;
    cout<<countDivisor2(18)<<nl;
return 0;
}



