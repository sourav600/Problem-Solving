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
    base(int i){
        cout<<"Constracting base\n";
        x=i;
    }
    ~base(){cout<<"Destracting base\n";}
    void showx(){cout<<x<<nl;}
};
class derived: public base{
    int y;
public:
    derived(int i): base(i){
        cout<<"Constracting Derived\n";
        y=i;
    }
    derived(int i, int j):base(j){
        cout<<"Constracting Derived\n";
        y=i;
    }
    ~derived(){cout<<"Destructing Derived\n";}
    void showy(){cout<<y<<nl;}
};
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    derived ob1(10), ob2(10,20);
    ob1.showx();
    ob1.showy();
    ob2.showx();
    ob2.showy();
return 0;
}