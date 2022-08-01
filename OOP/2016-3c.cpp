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

class magic {
    static int i;
public:
    magic(int j) {i=j;}
    int get(){return (i=i*2);}
};
int magic::i=0;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    magic ml[5]={0,4,1,3,2},*q;
    q=ml;
    cout<<q->get()<<nl;
    q=q+q->get();
    cout<<q->get()<<nl;
return 0;
}