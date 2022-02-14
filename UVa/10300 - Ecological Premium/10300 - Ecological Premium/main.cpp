//
//  main.cpp
//  10300 - Ecological Premium
//
//  Created by Moinul Sourav on 24/1/22.
//

#include <iostream>
#define ll long long
using namespace std;


int main(int argc, const char * argv[]) {
    int t,f,a,b,c;
    cin>>t;
    while(t--){
        ll sum=0;
        cin>>f;
        while (f--) {
            cin>>a>>b>>c;
            sum += a*c;
        }
        cout<<sum<<endl;
    }
    
    return 0;
}
