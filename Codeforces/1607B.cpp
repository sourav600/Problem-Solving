//
//  main.cpp
//  1607B-Odd Grasshopper
//
//  Created by Moinul Sourav on 4/11/21.
//

#include <iostream>

using namespace std;

void even(long long *x, long long i){
    *x = *x - i;
}

void odd(long long *x,long long i){
    *x = *x + i;
}

int main() {
    int t;
    long long x,n;
    cin>>t;
    while(t--) {
        cin>>x>>n;
         for(int i=1;i<=n;i++){
             if(x%2) odd(&x,i);
             else even(&x,i);
         }
         cout<<x<<endl;
         x=0;
    }
    
   
    
    return 0;
}
