//
//  main.cpp
//  A - Signed Difficulty
//
//  Created by Moinul Sourav on 29/8/21.
//

#include <iostream>
#include<cmath>
using namespace std;
int main(int argc, const char * argv[]) {
    double n;
    cin>>n;
    
    int x = floor(n);
    int y = (n-x)*10;

    if(y>=0 && y<=2) cout<<x<<"-"<<endl;
    else if(y>=3 && y<=6) cout<<x<<endl;
    else cout<<x<<"+"<<endl;

    return 0;
}
