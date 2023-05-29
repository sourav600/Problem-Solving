#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int lArr[n1], rArr[n2];
    // int p=0;
    // for(int i=l; i<=mid; ++i) lArr[p++] = arr[i];
    // p=0;
    // for(int i=mid+1; i<=r; ++i) rArr[p++] = arr[i];
    for (int i = 0; i < n1; i++)    
    lArr[i] = arr[l + i];    
    for (int j = 0; j < n2; j++)    
    rArr[j] = arr[mid + 1 + j];    

    int i=0, j=0,k=l;
    while(i<n1 && j<n2){
        if(lArr[i] <= rArr[j]){
            arr[k] = lArr[i];
            i++;
        }else{
            arr[k] = rArr[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        arr[k] = lArr[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = rArr[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r){
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr,l,mid,r);
    }
}

int main(){
    int arr[] = { 12, 31, 25, 8, 32, 17, 40, 42 };  
    int n = sizeof(arr) / sizeof(arr[0]);  
    for(int i=0; i<n; ++i) cout<<arr[i]<<" ";
    cout<<"\n";
    mergeSort(arr,0,n-1);

    for(int i=0; i<n; ++i) cout<<arr[i]<<" ";
    return 0;
}