//
//  main.cpp
//  1454 A
//
//  Created by Moinul Sourav on 6/8/21.
//

#include <iostream>
using namespace std;



int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    int arr[105];
    
    while(t--){
        int n;
        cin>>n;
        int num = n;
        for (int i=1; i<=n; i++) arr[i]=i;
        
        if(n%2){
            int mid = (n/2)+1;
            int temp = arr[n];
            arr[n] = arr[mid];
            arr[mid] = temp;
            n--;
        }
        
        for (int i=1; i<n; i++,n--) {
            int temp = arr[i];
            arr[i] = arr[n];
            arr[n] = temp;
        }
        for (int i=1; i<=num; i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}
