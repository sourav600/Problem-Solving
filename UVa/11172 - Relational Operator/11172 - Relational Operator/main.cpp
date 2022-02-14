//
//  main.cpp
//  11172 - Relational Operator
//
//  Created by Moinul Sourav on 1/9/21.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(a>b) cout<<">"<<endl;
        else if(a<b) cout<<"<"<<endl;
        else cout<<"="<<endl;
    }
    return 0;
}
