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
    int x,y;
public:
    myclass(int i=0, int j=0){x=i; y=j;}
    void show(){cout<<x<<nl<<y;}
    myclass operator+(myclass ob2){
        myclass add;
        add.x = this->x + ob2.x;
        add.y = this->y + ob2.y;
        return add;
    }
    // myclass operator=(myclass ob){
    //     myclass ob3;
    //     ob3.x = ob.x;
    //     ob3.y = ob.y;
    //     return ob3;
    // }
};

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    myclass ob,ob1(5,10), ob2(10),ob3;
    ob = ob1+ob2;
    //ob3=ob;
    
    ob.show();
    //ob3.show();
return 0;
}