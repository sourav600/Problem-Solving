//
//  main.cpp
//  119 - Greedy Gift Givers
//
//  Created by Moinul Sourav on 10/2/22.
//

#include <iostream>
#include <string>
#include <unordered_map>
#include<vector>
using namespace std;

int main(int argc, const char * argv[]) {
    
    unordered_map<string, int> m;
    //unordered_map<string, int>::iterator it;
    vector<string> v;
    vector<string>::iterator it;
    int t,tk,person;
    string str;

    int nLine = 1;
    while(cin>>t){
        int temp=t;
        while(t--){
            cin>>str;
            m.insert({str,0});
            v.push_back(str);
        }
        while (temp--) {
            cin>>str>>tk>>person;
            if(person>0){
                int count = tk/person;   //200/3 = 66
                m[str] -= count*person;  //66*3 = 198
                while(person--){
                    cin>>str;
                    m[str] += count;
                }
            }
        }
        if(nLine++ > 1) cout<<endl;
        for(it=v.begin(); it!=v.end(); it++) cout<<*it<<" "<<m[*it]<<endl;
        
        m.clear();
        v.clear();
        
    }
    
    return 0;
}