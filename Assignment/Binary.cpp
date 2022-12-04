#include<bits/stdc++.h>
using namespace std;


void binary(int l, int r,  int n, vector<int> &v){
    int mid = (r+l)/2;
    if(l>r) {cout<<"Not Found!\n"; return;}
    if(v[mid]==n) {cout<<"Found at position "<< mid+1; return;}
    else if(v[mid]>n) binary(l,mid-1,n,v);
    else binary(mid+1,r,n,v);
}

int main(){

    //cout<<"Enter Array elements: ";
    vector<int> arr;
    int x;
    while(cin>>x && getchar()!='\n') arr.push_back(x);
    //cout<<"Enter an element to search: ";
    int n; cin>>n;
    binary(0,arr.size()-1,n,arr);
return 0;
}