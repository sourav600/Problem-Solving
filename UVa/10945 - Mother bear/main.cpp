 #include<iostream>
#include<string>
#include<vector>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;

int palindrome(vector<char> &v){
    int size = v.size()-1;
    for(int i=0; i<=size ; i++,size--){
        if(v[i]!=v[size]) return 0;
    }
    return 1;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector<char> v;
    string str;
    while(getline(cin,str) && str!="DONE"){
        for(int i=0; str[i]!='\0'; i++){
            if(str[i]>='a' && str[i]<= 'z') v.push_back(str[i]);
            else if(str[i]>='A' && str[i]<='Z') v.push_back(str[i]+32);
        }
        palindrome(v) == 1? cout<<"You won't be eaten!\n": cout<<"Uh oh..\n";
        v.clear();
    }
    
    return 0;
}