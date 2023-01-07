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

int partition(int arr[], int l, int r){
    int pivot,i,j;
    pivot=arr[r];
    i=l-1;
    for(j=l;j<r;++j){
        if(arr[j]<pivot){
            ++i;
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    int temp = arr[r];
    arr[r] = arr[i+1];
    arr[i+1] = temp;

    return i+1;
}

void quickSort(int arr[], int l, int r){
    if(l>=r) return;

    int p = partition(arr,l,r);

    quickSort(arr,l,p-1);
    quickSort(arr,p+1,r);
}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    int  n; cin>>n;
    int arr[n];
    For(i,n)cin>>arr[i];
    quickSort(arr,0,n-1);

    For(i,n) cout<<arr[i]<<" ";

return 0;
}