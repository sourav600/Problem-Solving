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

int solve(int arr[],int n){
    int max_so_far = INT_MIN, max_ending = 0;
    for(int i=0;i<n;++i){
        max_ending = max_ending+arr[i];
        max_so_far = max(max_so_far,max_ending);
        if(max_ending < 0) max_ending=0;
    }
    return max_so_far;
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif
    int arr[] = { -2, -3, 4, -1, -2, 1, 5, -3 };
    int size = sizeof(arr)/sizeof(arr[0]);
    int mx_sum = solve(arr,size);
    cout<<mx_sum<<nl;

return 0;
}