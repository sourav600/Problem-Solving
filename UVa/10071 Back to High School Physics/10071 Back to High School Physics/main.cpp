//
//  main.cpp
//  10071 Back to High School Physics
//
//  Created by Moinul Sourav on 1/9/21.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int v,t;
    while(cin>>v>>t){
        int ans = v*2*t;       //s=vt, t=2t
        cout<<ans<<endl;
    }

    return 0;
}
