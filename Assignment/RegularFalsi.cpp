#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define nl '\n'
#define pi acos(-1)
#define ll long long
#define For(i,n) for(ll i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define ordered_set tree<pair<int,int>, null_type,less<pair<int,int> >, rb_tree_tag,tree_order_statistics_node_update>

typedef unsigned long long  ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vl;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
const ll M = 1e9 + 7;
const ll N = 2e5 + 10;
vector<pair<int,int> > movements = { {+1,0},{-1,0},{0,+1},{0,-1} };
ll mod(ll a){ return ((a%M)+M)%M;}

double f(double x){
    return (x*x*x)-(x*x)+2;
}

void regularFalsi(double a, double b){

    if(f(a)*f(b) >= 0.0){
        cout<<"Invalid a,b\n";
        return;
    }
    double x=a;
    for(int i=0; i<1000000; ++i){
        x = (a*f(b) - b*f(a)) / (f(b)-f(a));
        if(f(x)==0.0){
            return;
        }
        else if(f(x)*f(a) < 0.0) b=x;
        else a = x;
    }
    cout<<"The root is: "<<x<<endl;
}

int main(){
    double a=-3, b=2;
    regularFalsi(a,b);

return 0;
}



