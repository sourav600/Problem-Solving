#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define For(i,n) for(int i=0; i<n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define pb(x) push_back(x)
#define pi acos(-1)
typedef long long ll;
typedef unsigned long ulong;
class myclass{
    int a,b;
public:
    myclass(int i=0, int j=0){a=i; b=j;}
    void show(){cout<<a<<nl<<b<<nl;}
};

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    myclass ob1(10,20),ob2;
    ob1.show();
    ob2=ob1;
    ob2.show();
return 0;
}