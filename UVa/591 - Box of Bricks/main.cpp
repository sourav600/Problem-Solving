//
//  main.cpp
//  591 - Box of Bricks
//
//  Created by Moinul Sourav on 20/8/21.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int set=1;
    while (1) {
        int n,total=0,arr[102],count=0;
        cin>>n;
        if (n!=0) {
            
            
            for (int i=0; i<n; i++) {
                cin>>arr[i];
                total += arr[i];
            }
            int wall = total / n;
            for (int i=0; i<n; i++) {
                if (arr[i]>wall) {
                    count += arr[i]-wall;
                }
            }
            cout<<"Set #"<<set<<endl;
            set++;
            cout<<"The minimum number of moves is "<<count<<"."<<endl<<endl;
            count=0;
        }
        else break;
    }
   
    return 0;
}
