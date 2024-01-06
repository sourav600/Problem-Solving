//
//  main.cpp
//  Disk Space
//
//  Created by Moinul Sourav on 5/11/21.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int t,loop=1;
    cin>>t;
    
    while(t--){
        int n,space[101],capacity[101],sum=0,count = 1;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>space[i];
            sum += space[i];
        }
        for(int i=0;i<n;i++){
            cin>>capacity[i];
        }
        sort(capacity, capacity+n, greater<int>());
        for (int i=0; sum>capacity[i]; i++) {
            sum -= capacity[i];
            count++;
        }
        cout<<"Case "<<loop<<": "<<count<<endl;
        loop++;
        
    }
    
    return 0;
}
