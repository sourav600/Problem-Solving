#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a=b;
    b=temp;
}


int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif

    vector<int> arr;
    int n;
    while(cin>>n && getchar()!='\n') arr.push_back(n);

    for(int i=0; i<arr.size()-1;++i){
        int min = i;
        for(int j=i+1; j<arr.size();j++){
            if(arr[min]>arr[j]) min=j;
        }
        swap(arr[i],arr[min]);
    }

    for(int i=0;i<arr.size();++i) cout<<arr[i]<<" ";

return 0;
}