#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define mi map<int,int>
#define umi unordered_map<int,int>
#define pb(x) push_back(x)
#define pi acos(-1)
typedef long long ll;
typedef unsigned long ulong;
const ll M = 1000000007;

void binary(int l, int r,  int n, vi &v){
    int mid = (r+l)/2;
    if(l>r) {cout<<"Not Found!\n"; return;}
    if(v[mid]==n) {cout<<"Found at position "<< mid+1; return;}
    else if(v[mid]>n) binary(l,mid-1,n,v);
    else binary(mid+1,r,n,v);
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    //cout<<"Enter Array elements: ";
    vi v;
    int x;
    while(cin>>x && getchar()!='\n') v.pb(x);
    //cout<<"Enter an element to search: ";
    int n; cin>>n;
    binary(0,v.size()-1,n,v);
return 0;
}