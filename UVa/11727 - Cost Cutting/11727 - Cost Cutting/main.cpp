//
//  main.cpp
//  11727 - Cost Cutting
//
//  Created by Moinul Sourav on 2/9/21.
//

#include <iostream>
#include <set>
#include<iterator>
using namespace std;

int main(int argc, const char * argv[]) {
    multiset<int> s;
    multiset <int>::iterator it;
    int t,a,b,c,loop=0;
    cin>>t;
    while(t--){
        loop++;
        cin>>a>>b>>c;
        s.insert(a);
        s.insert(b);
        s.insert(c);
        it = s.begin();
        it++;
        cout<<"Case "<<loop<<": ";
        cout<<*it<<endl;
        s.clear();
    }
 
    return 0;
}

