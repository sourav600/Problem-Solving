#include<iostream>
#include<string>
#include<map>
#include<set>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    map<char,int> ms;
    map<char,int>::iterator it;
    string str;
    int loop=1;
    while(getline(cin,str)){
        //if(loop++ > 1) cout<<endl;
        int count = 0;
        for(int i=0; str[i]!='\0';i++){
            if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z' ) ms[str[i]] += 1;            
            if(count<ms[str[i]]) count = ms[str[i]];
        }
        for(it=ms.begin(); it!=ms.end(); it++){
        if(it->second == count) cout << it->first;
    }
    cout<<" "<<count<<endl;;
    ms.clear();
 }
    

return 0;
}