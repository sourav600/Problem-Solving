//
//  main.cpp
//  11547 Automatic Answer
//
//  Created by Moinul Sourav on 27/8/21.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        long ans = (315*n)+36962;
        if (ans<0) ans *= -1;
        
        cout<<(ans/10)%10<<endl;
    }
    
    return 0;
}
