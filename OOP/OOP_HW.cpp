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

class area{
    double d1,d2;
public:
    void set_dim(double dim1, double dim2){ d1=dim1; d2=dim2;}
    void get_dim(double &dim1, double &dim2) {dim1=d1; dim2=d2;}
    virtual double get_area() = 0;
};
class triangle:public area{
    public:
        double get_area(){
            double dim1,dim2;
            get_dim(dim1,dim2);
            return 0.5*dim1*dim2;
        }
};

int main(){


    area *p;
    triangle t;
    t.set_dim(5.0,10.0);
    p = &t;
    cout<<p->get_area()<<nl;
return 0;
}