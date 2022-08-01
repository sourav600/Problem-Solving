//
//  main.cpp
//  E1. Permutation Minimization by Deque
//
//  Created by Moinul Sourav on 20/12/21.
//

#include <iostream>
#include<iterator>
#include<list>

using namespace std;
int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    while(t--){
        list<int>l;
        int n;
        cin>>n;
        int arr[n];
        for (int i=0; i<n; i++) cin>>arr[i];
        
        l.push_back(arr[0]);
        int temp = arr[0];
        for(int i=1; i<n;i++){
            if(temp<arr[i]) l.push_back(arr[i]);
            
            else {
                l.push_front(arr[i]);
                temp = arr[i];
            }
        }
        for(auto p : l){
            cout<<p<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
