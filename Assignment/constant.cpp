#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n = 0;
    string s;
    bool flag = false;
    while(getline(cin,s)){
        for(int i=0; i<s.size(); ++i){
            if(s[i]>='0' && s[i]<='9'){
                if((s[i-1] >='0' && s[i-1] <='9')||s[i-1]==' ' || s[i-1]=='='
                    || s[i-1]=='*' || s[i-1]=='/' || s[i-1]=='+' || s[i-1]=='-'
                    || s[i-1]=='<' || s[i-1]=='>'){
                    n = (n*10)+(s[i]-'0');
                    flag = true;
                }
                else{
                    if(flag) {
                        cout<<n<<endl;
                        flag = false;
                    }
                    n=0;
                }
            }
        }
    }
return 0;
}
