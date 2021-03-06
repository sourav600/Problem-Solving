#include<iostream>
#include<string>
#include<map>
#include<set>
#include <cctype>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    map<char, int> m;
    map<char, int>::iterator it;
    map<int, set<char> > ms;
    map<int, set<char> >::iterator it2;
    int n;
    cin>>n;
    cin.ignore();

    string str;
    while(n--){
        getline(cin, str);
        for(int i=0; str[i]!='\0'; i++){
            if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z') {
                if(str[i]>='a' && str[i]<='z') str[i] -= 32;
                m[str[i]]++;
            }
        }
    }
    
    for(it=m.begin(); it!=m.end();it++){
        ms[it->second].insert(it->first);
    }
    
    auto cur_it = ms.end();
    cur_it--;
    while(true){
        auto c = (*cur_it).second;
        auto count = (*cur_it).first;
        for(auto ch : c){
            cout<<ch<<" "<<count<<endl;
        }
        if(cur_it == ms.begin()) break;
        cur_it--;
    }
return 0;
}