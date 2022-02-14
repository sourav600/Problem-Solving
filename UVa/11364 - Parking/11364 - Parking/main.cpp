//
//  main.cpp
//  11364 - Parking
//
//  Created by Moinul Sourav on 19/1/22.
//

#include <iostream>
using namespace std;

int calculate(int a, int b){
    int min = a-b;
    return min;
}

int main(int argc, const char * argv[]) {
    
    int t,arr[21];
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int m=n;
        for(int i=0; i<n;i++) cin>>arr[i];
        
        for(int i=0; i<n;n--){
            for(int j=0;j<n-1;j++){
                if(arr[j]<arr[j+1]){
                    int swap = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = swap;
                }
            }
        }
        
        int min_distance = 0;
        for(int i=0; i<m-1; i++){
            min_distance += calculate(arr[i], arr[i+1]);
        }
        
        cout<<min_distance*2<<endl;
        for(int i=0;i<21;i++)arr[i]=0;
    }
    
    return 0;
}
