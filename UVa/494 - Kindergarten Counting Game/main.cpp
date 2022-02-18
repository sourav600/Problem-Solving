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
        int temp = 0;
        for (int i=0; str[i]!='\0'; i++){
             if ((str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122)){
                if(temp==0) {
                    count++;
                    temp = 1;
                }
             }
             else temp = 0;
        }
        cout<<count<<endl;
    }

return 0;
}