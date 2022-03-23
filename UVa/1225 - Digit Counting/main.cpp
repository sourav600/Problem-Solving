 //
//  main.cpp
//  1225 - Digit Counting
//
//  Created by Moinul Sourav on 24/8/21.
//

#include <iostream>
#include<unordered_map>
#include<string>
using namespace std;

int arr[10002];
int main(int argc, const char * argv[]) {
    
    unordered_map<int, int> m = {{0,0},{1,0},{2,0},{3,0},{4,0},{5,0},{6,0},{7,0},{8,0},{9,0}};

    
    int t;
    cin>>t;
    while(t--){
        int n,index=1;
        cin>>n;
        for (int i=1; i<=n; i++) {
            arr[index++] = i;
        }
        for (int i=1; i<=n; i++) {
            int temp = arr[i];
            while(temp > 0){
                m[temp%10]++;
                temp /= 10;
            }
        }
        for (int i=0; i<10; i++) {
            cout<<m[i]<<" ";
            
        }
        
        cout<<endl;
        m.clear();
    }
    
   
    return 0;
}
