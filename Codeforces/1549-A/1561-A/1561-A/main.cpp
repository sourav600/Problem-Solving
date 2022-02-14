//
//  main.cpp
//  1561-A
//
//  Created by Moinul Sourav on 1/9/21.
//

#include <iostream>
using namespace std;

int arr[1000];

int permutation(int arr[],int size,int count){
    int check=0;
    for(int i=0;i<size;i++){
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            check=1;
        }
    }
    if(check==1) count++;
    return count;
}
int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        for(int i=0;i<n;i++)cin>>arr[i];
        
        permutation(arr,n,count);
    }
    
    return 0;
}
