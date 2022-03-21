#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    unordered_map<char, int> um;
    string str;
    int t;
    cin>>t;
    while(t--){
        cin>>str;
        for(int i=0; str[i]!='\0';i++){
            if(str[i]=='A'||str[i]=='M'||str[i]=='R'||str[i]=='I'||str[i]=='T'||str[i]=='G'){
                um[str[i]]++;
            }
        }
        int count = 1000,temp;
        if(um['M']>=1) {
            temp = um['M'] / 1;
            if(count>temp) count = temp;
        }else{
            cout<<"0\n";
            um.clear();
            continue;
        }
        if(um['A']>=3) {
            temp = um['A'] / 3;
            if(count>temp) count = temp;
        }else{
            cout<<"0\n";
            um.clear();
            continue;
        } 
        if(um['R']>=2) {
            temp = um['R'] / 2;
            if(count>temp) count = temp;
        } else{
            cout<<"0\n";
            um.clear();
            continue;
        }
        if(um['G']>=1) {
            temp = um['G'] / 1;
            if(count>temp) count = temp;
        }else{
            cout<<"0\n";
            um.clear();
            continue;
        }
        if(um['I']>=1) {
            temp = um['I'] / 1;
            if(count>temp) count = temp;
        }else{
            cout<<"0\n";
            um.clear();
            continue;
        } 
        if(um['T']>=1) {
            temp = um['T'] / 1;
            if(count>temp) count = temp;
        }else{
            cout<<"0\n";
            um.clear();
            continue;
        } 
        cout<<count<<"\n";
        um.clear();
    }

return 0;
}