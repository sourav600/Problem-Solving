#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    string str;
    int n;
    cin>>n;
    cin>>str; 
    cout<<str[n-1]<<endl;

return 0;
}