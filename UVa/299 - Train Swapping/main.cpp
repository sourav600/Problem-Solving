#include<iostream>
#include<string>
#include<vector>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector<int> v;
    int t,n,x;
    cin>>t;
    while(t--){
        int count=0;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>x;
            v.push_back(x);
        }
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n;j++){
                if(v[i]>v[j]) count++;
            }
        }
        cout<<"Optimal train swapping takes "<<count<<" swaps\n";
        v.clear();
    }

return 0;
}