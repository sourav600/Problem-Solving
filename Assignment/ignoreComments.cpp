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
    while(getline(cin,s)){
        for(int i=0; i<s.size(); ++i){
            if(flag){
                while(i<s.size()){
                    if(s[i]=='*' && s[i+1]=='/'){
                        flag= false;
                    }
                    ++i;
                }
            }
            else if(s[i]=='/'){
                ++i;
                if(s[i]=='/') break;
                else if(s[i]=='*'){
                    flag = true;
                    while(i<s.size()){
                        if(s[i]=='*' && s[i+1]=='/'){
                            flag= false;
                        }
                        ++i;
                    }
                }
            }
            else cout<<s[i];
        }
        cout<<endl;
    }
return 0;
}
