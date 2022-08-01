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

    
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int arr[n][m];
        For(i,n){
            For(j,m) cin>>arr[i][j];
        }

        int maxi=0;
        For(i,n){
            For(j,m){
                int a=i,b=j,sum=0;;
                sum+=arr[i][j];
                while(a<n-1 && b<m-1) sum += arr[++a][++b];

                a=i; b=j;
                while(a>0 && b>0)sum += arr[--a][--b];

                a=i,b=j;
                while(a<n-1 && b>0)sum += arr[++a][--b];

                a=i,b=j;
                while(a>0 && b<m-1) sum+= arr[--a][++b];

                maxi = max(maxi,sum);
            }
        }
        cout<<maxi<<nl;
    }
return 0;
}