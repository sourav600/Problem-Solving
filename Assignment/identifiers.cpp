#include<bits/stdc++.h>
using namespace std;

vector<string> keywords;
unordered_map<string, int> um;

void check(string s){
    if(s=="for" || s=="return" || s=="void" || s=="break"
    || s=="continue" ||s=="while" || s=="do" || s=="print"
    || s=="else" || s=="int" || s=="float"
    || s=="char" || s=="double" || s=="string" || s=="static"
    || s=="switch" || s=="case" || s=="scanf" || s=="printf" ){
        if(um[s]==0) keywords.push_back(s);
        um[s] = 1;
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    string s;
    while(getline(cin,s)){
        string str = "";
        for(int i=0; i<s.size(); ++i){
            if(s[i]==' ' || s[i]==';' || s[i]==',' ){
                if(str!=" ") check(str);
                str = "";
            }
            else if(s[i]=='=' || s[i]=='('){
                if(str!=" ") check(str);
                str = "";
                break;
            }
            else if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
                str += s[i];
            }
        }
    }
    cout<<"Keywords: \n";
    for(auto it: keywords) cout<<it<<endl;

return 0;
}
