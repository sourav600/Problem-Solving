#include<iostream>
#include<iostream>
#include<sstream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    string str;
    while(getline(cin,str)){
        int count = 0;
        istringstream iss(str);
        string word;
        while(iss>>word){
            if((word[0]>='a' && word[0]<='z') || (word[0]>='A' && word[0]<='Z')) count++;
        }
        cout<<count<<endl;
    }

return 0;
}