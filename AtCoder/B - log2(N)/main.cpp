//
//  main.cpp
//  B - log2(N)
//
//  Created by Moinul Sourav on 21/8/21.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    
    long long n;
    cin>>n;
    int count=0;
    for (int i=0; i<60; i++) {
        if(pow(2, i)<=n) count=i;
        else break;;
    }
    cout<<count<<endl;
    count=0;
  
    return 0;
}
