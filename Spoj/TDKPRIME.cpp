#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll INF = 1e9 + 7;
const ll N = 100000000;
    vector<int> prime;
    vector<bool> isprime(100000005);

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    for(int i=3; i<=10000;i+=2){
        if(!isprime[i]){
            for(int j=i*i; j<=N; j+=i) isprime[j]=true;
        }
    }
    prime.push_back(2);
    for(int i=3;i<=N;i+=2){
        if(!isprime[i]) prime.push_back(i);
    }
    
    int t,n; cin>>t;
    while(t--){
        cin>>n; cout<<prime[n-1]<<"\n";
    }

return 0;
}