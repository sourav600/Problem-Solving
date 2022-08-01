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

class temp{
    char *p;
    int len;
public:
    temp(char *s){
        len = strlen(s);
        p = (char *) malloc(len+1);
        if(!p){
            cout<<"Allocation Error!\n";
            exit(1);
        }
        strcpy(p, s);
    }
    char *show(){
        return p;
    }

    char &replace(){
        return p;
    }

};
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    temp ob("OOP");
    ob.replace()="OOC";
    cout<<ob.show();
return 0;
}