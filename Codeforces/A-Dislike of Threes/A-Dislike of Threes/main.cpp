//
//  main.cpp
//  A-Dislike of Threes
//
//  Created by Moinul Sourav on 18/8/21.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int arr[2000];
    for (int i=0; i<1667; i++) {
        arr[i]=i+1;
    }
    int t;
    cin>>t;
    
    while(t--){
        int n,i=0,j;
        cin>>n;
        for (j=0; i!=n; j++) {
            if (arr[j]%10 == 3 || arr[j]%3 == 0) {
                continue;
            }
            else i++;
        }
        cout<<j<<endl;
    }
   
    return 0;
}
