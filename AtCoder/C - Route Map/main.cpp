//
//  main.cpp
//  C - Route Map
//
//  Created by Moinul Sourav on 23/1/22.
//

#include <iostream>
#include<string>
#include <unordered_map>
#include <vector>
#include <iterator>
using namespace std;

int main(int argc, const char * argv[]) {
    
    vector<string> v;
    vector<string>::iterator it;
    unordered_map<string, int> mp;
    //unordered_map<string, int>:: iterator it;
    int n,m;
    cin>>n>>m;
    string str;
    while(n--){
        cin>>str;
        mp[str]++;
        v.push_back(str);
    }
    while(m--){
        cin>>str;
        mp[str]++;
    }
    for(it=v.begin(); it!=v.end();it++){
        if(mp[*it] > 1) cout<<"Yes\n";
        else cout<<"No\n";
    }
    
    
    return 0;
}
