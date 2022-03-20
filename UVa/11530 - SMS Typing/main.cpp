#include<iostream>
#include<string>
#include<map>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;

int main(){


    map<char, int> m { {'a',1},{'b',2},{'c',3},{'d',1},{'e',2},{'f',3},{'g',1},{'h',2},{'i',3},{'j',1},{'k',2}, {'l',3},{'m',1},{'n',2},{'o',3},{'p',1},{'q',2},{'r',3},{'s',4},{'t',1},{'u',2},{'v',3},{'w',1},{'x',2},{'y',3},{'z',4},{' ',1} };
    int t,loop=1;
    string str;
    cin>>t;
    cin.ignore();
    while(t--){
        int count=0;
        getline(cin, str);
        for(int i=0; str[i]!='\0';i++) count += m[str[i]];
        cout<<"Case #"<<loop++<<": "<<count<<endl;
    }

return 0;
}