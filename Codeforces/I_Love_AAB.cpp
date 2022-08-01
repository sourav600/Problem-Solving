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

    int t;
    string s;
    cin>>t;
    cin.ignore();
    while(t--){
        
        int a=0,b=0,i=0;
        cin>>s;
        int len = s.size();
        
        if(s[len-1]=='A' || len<2) cout<<"NO\n";
        else{
            for(i=0;s[i]!='\0' && a>=b;i++){
                if(s[i]=='A') a++;
                else b++;
            }
            if(i==len && a>=b) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }

return 0;
}