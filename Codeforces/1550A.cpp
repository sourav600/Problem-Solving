//
//  main.cpp
//  1550A
//
//  Created by Moinul Sourav on 29/7/21.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    
    while(t--){
        int n,count=0;
        cin>>n;
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        else{
            for (int i=1; n>0; i+=2) {
                n = n - i;
                count++;
            }
        }
        cout<<count<<endl;
    }
  
    return 0;
}
