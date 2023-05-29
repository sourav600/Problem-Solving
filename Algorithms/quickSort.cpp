#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int lo, int hi){
    int i = lo-1;
    for(int j=lo; j<hi; ++j){
        if(arr[j] < arr[hi]){
            ++i;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[hi]);
    return i+1;
}

void quicksort(int arr[], int lo, int hi){
    if(lo<hi){
        int pi = partition(arr,lo,hi);

        quicksort(arr,lo, pi-1);
        quicksort(arr,pi+1, hi);
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    int arr[] = { 10, 7,5,8,8, 9, 1,8};
    int n = sizeof(arr) / sizeof(arr[0]);

    quicksort(arr,0,n-1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}