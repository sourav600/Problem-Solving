//
//  main.cpp
//  1549-A
//
//  Created by Moinul Sourav on 7/8/21.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int t;
    cin>>t;
    while(t--){
        long n,i,temp=0;
        cin>>n;
        for (i=2; i<n; i++) {
            if(n%i) {
                temp=n%i;
                break;
            }
        }
        cout<<i<<" "<<n-temp<<endl;
    }
    return 0;
}
