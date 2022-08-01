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

class myClass{
    int x;
public:
    myClass(int i=0){x=i;}
    void show(){cout<<x<<nl;}
    myClass operator++(int){
        myClass temp;
        temp.x = x++;
        return temp;
    }
    myClass operator++(){
        myClass temp;
        temp.x = ++x;
        return temp;
    }
};



int main(){

    myClass ob1(10),ob2;
    ob1++;
    ++ob2;
    ob1.show();
    ob2.show();
return 0;
}