#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    unordered_map<int , int> um;
    int t,n,x;
    cin>>t;
    while(t--){
        int check=0;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>x;
            um[x]++;
            if(um[x]>=3 && check==0){
                cout<<x<<endl;
                check=1;
            }
        }
        if(check==0) cout<<"-1\n";
        um.clear();
    }
return 0;
}