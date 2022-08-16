#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define mi map<int,int>
#define umi unordered_map<int,int>
#define pb(x) push_back(x)
#define pi acos(-1)
typedef long long ll;
typedef unsigned long ul;
typedef unsigned long long ull;
const int N = 5000005;
vector<ull> totient(N);


int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    For(i,N) totient[i]=i;
    for(int i=2;i<N;++i){
        if(totient[i]==i){
            for(int j=2*i;j<N;j+=i){
                totient[j] *= i-1;
                totient[j] /= i;
            } 
            totient[i]=i-1;
        }
    }
    //For(i,10) cout<<totient[i]<<nl;
    for(int i=2; i<N;++i) totient[i] = (totient[i]*totient[i]) + totient[i-1];
    int t,a,b; cin>>t;
    For(j,t){
        cin>>a>>b;
        ull ans=totient[b]-totient[a-1];
        cout<<"Case "<<j+1<<": "<<ans<<nl;
    }

return 0;
}