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

class base{
    int x;
public:
    void setx(int i){x=i;}
    void getx(){cout<<x<<nl;}
};
class derived1: public base{
    int y;
public:
    void sety(int i){y=i;}
    void gety(){cout<<y<<nl;}
};
class derived2: private base{
    int z;
public:
    void set_xz(int i, int j){setx(i); z=j;}
    void get_xz(){getx(); cout<<z<<nl;}
};

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    derived1 ob;
    ob.setx(10);
    ob.sety(20);
    ob.getx(); ob.gety();

    derived2 ob2;
    ob2.set_xz(30,40);
    ob2.get_xz();
    
return 0;
}