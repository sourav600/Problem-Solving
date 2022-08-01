#include<bits/stdc++.h>

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
        int a=0, b=0, check=0;
        cin>>s;
        for(int i=0; s[i]!='\0'; ){
            if(s[i]=='a'){
                b=0;
                a++;
                while(s[++i]=='a') a++;
                if(a==1) {check=1; break;}
            }
            else{
                a=0;
                b++;
                while(s[++i]=='b') b++;
                if(b==1) {check=1; break;}
            }
        }
        if(check==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
return 0;
}