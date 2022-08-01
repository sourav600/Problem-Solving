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
        int check=0;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>x;
            v.push_back(x);
        }
        int first = v[0], second=v[1];
        for(int i=0; i<n; i+=2){
            if(first%2 != v[i]%2 && check==0){
                cout<<"NO\n";
                check=1;
                break;
            }
        } 
        for(int i=1; i<n; i+=2){
            if(second%2 != v[i]%2 && check==0){
                cout<<"NO\n";
                check=1;
                break;
            }
        } 
        if(check==0)cout<<"YES\n";
        v.clear();
    }

return 0;
}