#include<iostream>
#include <set>
using namespace std;
int main()
{
    set<string> s;
    char str;
    string temp = "";
    while(cin.get(str)){
        if((str >=65 && str <=90) || (str>=97 && str<= 122)){
            if(str<97){
                str+=32;
            }
            temp += str;
        }
        else{
            if(temp!="")
                s.insert(temp);
            temp = "";
        }
            
    }
    for(auto el:s){
        cout<<el<<endl;
    }
    return 0;
}
