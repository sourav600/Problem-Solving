//
//  main.cpp
//  12578 - 10:6:2
//
//  Created by Moinul Sourav on 11/9/21.
//

#include <iostream>
#include <iomanip>
#include <cmath>
#define pi acos(-1)
using namespace std;

int main(int argc, const char * argv[]) {
    double t,l,w,r;
    cin>>t;
    while (t--) {
        cin>>l;
        w = (l*6)/10.00;
        r = l/5.00;
        
        double area = l*w;
        double circle = pi * r * r;
        cout<<fixed<<setprecision(2)<<circle<<" "<<(area-circle)<<endl;
        
    }
    
    return 0;
}
