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

int de_arr[100];

void decompose(int a[], int n){
    int blk_idx = -1; 
    int blk_sz = sqrt(n);
    For(i,n){
        if(i%blk_sz==0) blk_idx++;
        de_arr[blk_idx] += a[i];
    }
}
int query(int arr[],int n, int l, int r){
    int blk_sz = sqrt(n);
    int sum=0;
    //first block in range
    while(l<r && l%blk_sz!=0){
        sum+=arr[l++];
    }
    //middle full block
    while(l+blk_sz-1 <= r){
        sum += de_arr[l/blk_sz];
        l += blk_sz;
    }
    //last block in range
    while(l<=r){
        sum += arr[l++];
    }
    return sum;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    int arr[n];
    For(i,n) cin>>arr[i];
    decompose(arr,n);

    int q,l,r;
    cin>>q;
    while(q--){
        cin>>l>>r;
        cout<<query(arr,n,l,r)<<nl;
    }


return 0;
}