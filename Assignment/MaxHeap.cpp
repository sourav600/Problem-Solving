#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

void maxHeapCreation(vector<int> &v, int size, int i){
    int mx=i;
    int l= (2*i)+1;
    int r= (2*i)+2;

    if(l<size && v[l]>v[mx]) mx=l;
    if(r<size && v[r]>v[mx]) mx=r;

    if(mx!=i){
        swap(v[i],v[mx]);
        maxHeapCreation(v,size,mx);
    }
}

int main(){

    system("clear");
    int n;
    vector<int>arr(n);

    cout<<"Enter array size: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for(int i=0;i<n;++i) cin>>arr[i];

    int start = (n/2)-1;
    for(int i=start; i>=0;--i) maxHeapCreation(arr,n,i);

    for(int i=0;i<n;++i) cout<<arr[i]<<" ";
    return 0;
}