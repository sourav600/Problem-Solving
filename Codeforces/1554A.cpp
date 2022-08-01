//
//  main.cpp
//  1554-A
//
//  Created by Moinul Sourav on 30/7/21.
//

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
long long arr[1000002];
int main(int argc, const char * argv[]) {

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        long long max = 0;
        for(int i=1;i<n;i++){
            if (max<arr[i]*arr[i-1]) {
                max=arr[i]*arr[i-1];
            }
        }
        cout<<max<<endl;

        
    }
    
    return 0;
}
