//
//  main.cpp
//  12468 - Zapping
//
//  Created by Moinul Sourav on 29/1/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a,b;
    while(cin>>a>>b && a!=-1 && b!=-1){
        int ans = abs(a-b);
        ans<50?cout<<ans<<endl : cout<<100-ans<<endl;
    }
    
    return 0;
}
