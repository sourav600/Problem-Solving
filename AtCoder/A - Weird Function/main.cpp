//
//  main.cpp
//  A - Weird Function
//
//  Created by Moinul Sourav on 15/1/22.
//

#include <iostream>
using namespace std;

int func(int n){
    int ans = (n*n) + (2*n) + 3;
    return ans;
    
}

int main(int argc, const char * argv[]) {
    
    int t;
    cin>>t;
    int ft = func(t);
    int fftt = func(ft+t);
    int fft = func(ft);
    int fffttfft = func(fftt+fft);
    
    cout<<fffttfft<<endl;
    
    
    return 0;
}
