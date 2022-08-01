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
    int n,x;
    while(cin>>n){
        int count = 0;
        while(n--){
            cin>>x;
            v.push_back(x);
        }
        for(int i=0; i<v.size(); i++){
            for(int j=i+1; j<v.size(); j++){
                if(v[i]>v[j]) count++;
            }
        }
        cout<<"Minimum exchange operations : "<<count<<endl;
        v.clear();
    }

return 0;
}