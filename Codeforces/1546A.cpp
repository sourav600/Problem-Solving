//
//  main.cpp
//  1546A
//
//  Created by Moinul Sourav on 30/7/21.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int t,arr[100000];
    cin>>t;
    while(t--){
        int n,sum1=0,sum2=0;
        cin>>n;
        int arr1[102],arr2[102];
        for (int i=1; i<=n; i++) {
            cin>>arr1[i];
        }
        for (int i=1; i<=n; i++) {
            cin>>arr2[i];
        }
        int index=1,count=0;
        
        for (int i=1; i<=n; i++) {
            sum1 += arr1[i];
            sum2 += arr2[i];
        }
        if (sum1==sum2){
            for (int i=1; i<=n; i++) {
                for (int j=1; j<=n; j++) {
                    if(arr1[i]>arr2[i] && arr1[j]<arr2[j]){
                        arr1[i] -= 1;
                        arr1[j] += 1;
                        arr[index++]=i;
                        arr[index++]=j;
                        --j;
                        count++;
                    }
                }
            }
            cout<<count<<endl;
            for (int i=1; i<+index; i+=2) {
                cout<<arr[i]<<" "<<arr[i+1]<<endl;
            }
        }
        else cout<<-1<<endl;
        
       
        
        
    }
    
    return 0;
}
