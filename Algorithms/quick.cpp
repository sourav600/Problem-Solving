#include<bits/stdc++.h>
using namespace std;


int partition(int arr[], int l, int r){
    int pos = l-1;
    for(int i=l; i<r; ++i){
        if(arr[i] < arr[r]){
            ++pos;
            swap(arr[pos],arr[i]);
        }
    }
    swap(arr[pos+1],arr[r]);
    return pos+1;
}

void quicksort(int arr[], int l, int r){
    if(l<r){
        int pivot = partition(arr,l,r);
        quicksort(arr,l, pivot-1);
        quicksort(arr,pivot+1, r);
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    int n; cin>>n; // array size
    int arr[n];
    for(int i=0; i<n; ++i){
    	cin>>arr[i];
    }

    quicksort(arr,0,n-1);
    for(int i=0; i<n; ++i){
    	cout<<arr[i]<<" ";
    }


return 0;
}