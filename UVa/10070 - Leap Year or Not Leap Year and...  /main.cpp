#include<iostream>
#include<string>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    string str;
    int loop=1;
    while(cin>>str){
        if(loop++ >1) cout<<"\n";
        
        int div4=0, div100=0, div400=0, div15=0, div55=0,leap=0,huluculu=0,bulukulu=0;
        for(int i=0; i<str.size();i++){
            div4 = ((div4*10)+(str[i]-'0'))%4;
            div100 = ((div100*10)+(str[i]-'0'))%100;
            div400 = ((div400*10)+(str[i]-'0'))%400;
            div15 = ((div15*10)+(str[i]-'0'))%15;
            div55 = ((div55*10)+(str[i]-'0'))%55;
        }
        
        if(div400==0 || (div4==0 && div100!=0)){
            cout<<"This is leap year.\n";
            leap=1;
        }
        if(div15==0){
            cout<<"This is huluculu festival year.\n";
            huluculu=1;
        }
         if(div55==0 && leap==1){
            cout<<"This is bulukulu festival year.\n";
            bulukulu=1;
        }
        if(leap==0 && huluculu==0 && bulukulu==0) cout<<"This is an ordinary year.\n";
        
    }

return 0;
}