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
    int n;
    while(cin>>n , n>=0){
        if(n==0) v.push_back(0);
        else{
            while(n>0){
            v.push_back(n%3);
            n /= 3;
            }
        }
        

        for(int i=v.size()-1; i>=0; i--) cout<<v[i];
        cout<<endl;
        v.clear();
    }

return 0;
}