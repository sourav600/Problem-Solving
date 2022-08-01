#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t,x,y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        int min,max, step=0;
        x<y?(min=x,max=y): (min=y,max=x);
        if(min==1 && max>2) step=-1;
        else{
            step+=((min-1)*2);
            int temp=max-min;
            if(temp%2){temp--; step += (1+temp*2);}
            else step+=temp*2;
        }
        cout<<step<<endl;
    }
return 0;
}