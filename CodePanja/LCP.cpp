#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define pb(x) push_back(x)
#define pi acos(-1)
typedef long long ll;
typedef unsigned long ulong;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t,n,loop=1;
    cin>>t;
    while(t--){
        int min = INT_MIN;
        cin>>n;
        vs v(n+1);
        For(i,n){
            cin>>v[i];
            min = v[i].size()<min ? v[i].size(): min;
        }
        int count=0;
        For(i,min){
            int check=0;
            For(j,n-1){
                if(v[j][i]!=v[j+1][i]){check=1; break;}
            }
            if(check==0) count++;
        }
        cout<<"Case "<<loop++<<": "<<count<<nl;
    }

return 0;
}