#include<iostream>
#include<string>
#include<map>
#include<set>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    map<char,int> m;
    map<int,set<char, greater<char> > > ms;
    map<char,int>::iterator it;
    string str;
    int loop = 1;
    while(getline(cin,str)){
        for(int i=0; str[i]!='\0';i++){
            m[str[i]]++;
        }
        for(it=m.begin(); it!=m.end();it++){
            ms[it->second].insert(it->first);
        }
        //output
        if(loop++ > 1)cout<<"\n";
        auto cur_it = ms.begin();
        while(true){
            auto freq = (*cur_it).first;
            auto digit = (*cur_it).second;
            for(auto ch : digit){
                printf("%d %d\n",ch,freq);
            }
            cur_it++;
            if(cur_it==ms.end()) break;
        }
        
        m.clear();
        ms.clear();
    }
return 0;
}