#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<<"Enter array elemnets (Integer): ";
    vector<int> arr;
    int n;
    while(cin>>n && getchar()!='\n') arr.push_back(n);
    cout<<"Enter value to find: ";
    int x,check=0; cin>>x;
    for(int i=0;i<v.size();++i){
        if(arr[i]==x) {cout<<x<<" found at positon "<<i+1<<endl; check=1; break;}
    }
    if(check==0)cout<<"Not Found\n";
return 0;
}