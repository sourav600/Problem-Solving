#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    string s;
    bool flag = false;
    getline(cin,s);
    int j=0;
    while(s[j]==' ') ++j; //ignore staring white space.

    if(s[j]=='/'){
        if(s[j+1]=='/') cout<<"This is a single line comment.\n";

        else if(s[j+1]=='*'){
            while(j<s.size()){
                if(s[j]=='*' && s[j+1]=='/'){
                    flag = true;
                    cout<<"This is a multi line comment.\n";
                }
                ++j;
            }
            if(flag==false) cout<<"This is invalid comment\n";
        }
        else cout<<"This is invalid comment\n";
    }
    else cout<<"This is invalid comment\n";

return 0;
}
