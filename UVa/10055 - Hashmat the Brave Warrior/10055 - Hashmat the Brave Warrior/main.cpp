//
//  main.cpp
//  10055 - Hashmat the Brave Warrior
//
//  Created by Moinul Sourav on 1/9/21.
//

#include <iostream>
#include<cmath>
using namespace std;
int main(int argc, const char * argv[]) {
    long long a,b;
    while(cin>>a>>b){
        long long ans = abs(a-b);
        cout<<ans<<endl;
    }

    return 0;
}
