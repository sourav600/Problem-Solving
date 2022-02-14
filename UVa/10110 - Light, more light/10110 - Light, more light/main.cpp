//
//  main.cpp
//  10110 - Light, more light
//
//  Created by Moinul Sourav on 20/8/21.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    int n,count=0;
    while(scanf("%d",&n) && n!=0){
        n%2==0 ? n=n/2 : n=(n/2)+1;
        cout<<n<<endl;
        for (int i=1; i*i<=n; i++) {
            
            if(i*i==n) count++;   // 6*6=36
            else if(n%i==0) count+=2;
        }
        cout<<count<<endl;
        if (count%2) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    
    return 0;
}
