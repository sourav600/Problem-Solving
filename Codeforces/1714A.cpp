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

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    int t; cin>>t; 
    int n,h,m;
    while(t--){
        cin>>n>>h>>m;
        if(h==0)h=24;
        int sleep=((h-1)*60)+m;
        int h1,m1,check=INT_MAX,H,M;
        while(n--){
            cin>>h1>>m1;
            if(h1==0) h1=24;
            int alarm=((h1-1)*60)+m1;
            int time;
            if(sleep<=alarm) time=alarm-time;
            else time = (1440-sleep)+alarm;
            if(check>time){
                H=h1; M=m1;
                check=time;
            }
        }
        cout<<H<<" "<<M<<nl;
        int hour,min;
        if(h<=H) hour=H-h;
        else hour=H-h+24;
        if(m<=M) min=M-m;
        else{min=M-m+60; --hour;}
        cout<<hour<<" "<<min<<nl;
    }
return 0;
}