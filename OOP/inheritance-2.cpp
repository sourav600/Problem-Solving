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
protected:
    int y;
public:
    void setx(int i){x=i;}
    void sety(int i){y=i;}
    int getx(){return x;}
    
};

class derived1: public base{
    int z;
public:
    void setz(int i){z=i;}
    void getxyz(){cout<<getx()<<nl<<y<<nl<<z<<nl;}
};
class derived2: protected base{
    int z;
public:
    void setxyz(int i, int j, int k){setx(i); y=j; z=k;}
    void getxyz(){cout<<getx()<<nl<<y<<nl<<z<<nl;}
};
class derived3: private base{
public:
    void setxy(int i, int j){setx(i); y=j;}
    void getxy(){cout<<getx()<<nl<<y<<nl;}
};
class child: public derived3{
    void setxy(int i, int j){setx(i); sety(j);}
    void getxy(){cout<<getx()<<nl<<gety()<<nl;}
};


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    derived1 ob1;
    ob1.setx(10);
    ob1.sety(20);
    ob1.setz(30);
    ob1.getxyz();

    derived2 ob2;
    ob2.setxyz(10,20,30);
    ob2.getxyz();
    
return 0;
}