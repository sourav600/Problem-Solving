//
//  main.cpp
//  B - Same Name
//
//  Created by Moinul Sourav on 29/8/21.
//

#include <iostream>
#include<map>

#include <iterator>
#include<string>
#include <algorithm>

using namespace std;
int main(int argc, const char * argv[]) {
    
    map<string,int> m;
    int n,temp=0;
    string s,t;
    cin>>n;
    while (n--) {
        cin>>s>>t;
        string cat = s+ "#" + t;
        m[cat] = m[cat]+1;
        if(m[cat] > 1) {
            cout<<"Yes"<<endl;
            temp=1;
            break;
        }
    }
    if(temp==0) cout<<"No"<<endl;
    
    return 0;
}
