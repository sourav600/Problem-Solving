#include<bits/stdc++.h>
//#include<string>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    string s;
    cin>>t;
    cin.ignore();
    while(t--){
        int len,t=0,m=0,i=0;
        cin>>len>>s;
        if(s[len-1]=='M') cout<<"NO\n";
        else{
            for(i=0;s[i]!='\0' && t>=m;i++){
                if(s[i]=='T') t++;
                else m++;
            }
            if(i==len && t==m*2) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }

return 0;
}