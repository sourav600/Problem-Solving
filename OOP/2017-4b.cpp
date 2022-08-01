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

class A{
int a;
public:
    void set_a(int aa) { a=aa; }
    int get_a(){ return a;}
};
class B:public A{
    int b;
public:
    void set_ab(int aa, int bb){
        set_a(aa); 
        b = bb + get_a();
    }
    void show(){ cout<<b;}

};

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    B ob1;
    ob1.set_ab(10,20);
    ob1.show();
return 0;
}