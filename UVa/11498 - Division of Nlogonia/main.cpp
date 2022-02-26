#include<iostream>
#include<string>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;

void solve(int n, int m,int x, int y){
    if(x==n || y==m) cout<<"divisa\n";
    else if(x>n && y>m) cout<<"NE\n";
    else if(x<n && y>m) cout<<"NO\n";
    else if(x<n && y<m) cout<<"SO\n";
    else if(x>n && y<m) cout<<"SE\n";
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int k,n,m,x,y;
    while(cin>>k && k!=0){
        cin>>n>>m;
        while(k--){
            cin>>x>>y;
            solve(n,m,x,y);
        }
    }
return 0;
}