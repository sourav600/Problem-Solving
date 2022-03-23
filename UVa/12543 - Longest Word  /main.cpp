#include<iostream>
#include<string>
#include <cctype>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    string str, large;
    int count=0,temp=0;
    while(cin>>str && str!="E-N-D"){
        for(int i=0;i<str.size(); i++){
            if(isalpha(str[i]) || str[i]=='-'){
                temp++;
            }
        }
        if(temp>count) {
            large = str;
            count = temp;
        }
        temp=0;
    }
    for(int i=0; large[i]!='\0';i++){
        if(large[i]>='A' && large[i]<='Z'){
            char ch = large[i]+32;
            cout<<ch;
        }
        else if((large[i]>='a' && large[i]<='z') || large[i]=='-') cout<<large[i];
    }
    cout<<endl;

return 0;
}