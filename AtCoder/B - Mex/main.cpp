#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    unordered_map<int, int> m;
    int n,x;
    cin>>n;
    while(n--){
        cin>>x;
        m[x]++;
    }
    for(int i=0; i<2001; i++){
        if(m[i]==0){
            cout<<i<<endl;
            break;
        }
    }
    
return 0;
}