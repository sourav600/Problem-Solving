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
    int line=0;
    while(getline(cin,s)){
        ++line;
        for(int i=0; i<s.size(); ++i){
            if(s[i]=='/'){
                if(s[i+1]=='/'){
                    cout<<"Line "<<line<<" contain single line commnet"<<endl;
                    break;
                }
                else if(s[i+1]=='*'){
                    cout<<"Line "<<line<<" contain single multi commnet\n"<<endl;
                    break;
                }
            }
        }
    }


return 0;
}
