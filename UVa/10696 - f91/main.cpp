#include<iostream>
#include<string>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;

int f91(int n){
    if(n>=101) return n-10;
    else return f91(f91(n+11));
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    while(cin>>n, n){
        cout<<"f91("<<n<<") = ";
        cout<<f91(n)<<endl;
    }

return 0;
}