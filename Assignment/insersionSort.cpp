#include<bits/stdc++.h>
using namespace std;

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif
    vector<int> arr;
    int n;
    while(cin>>n && getchar()!='\n')arr.push_back(n);
    for(int i=1;i<arr.size();++i){
        int temp=arr[i],j=i-1;
        while (j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<arr.size();++i) cout<<arr[i]<<" ";

return 0;
}