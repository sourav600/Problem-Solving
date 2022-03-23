//
//  main.cpp
//  11764 - Jumping Mario
//
//  Created by Moinul Sourav on 28/1/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t,n,arr[100],loop=1;
    cin>>t;
    while(t--){
        int high = 0, low = 0;
        cin>>n;
        for(int i=0;i<n;i++) cin>>arr[i];
        
        for(int i=0; i<n-1;i++){
            if(arr[i]<arr[i+1]) high++;
            else if (arr[i]>arr[i+1]) low++;
        }
        cout<<"Case "<<loop++<<": "<<high<<" "<<low<<endl;;
        
    }
   
    return 0;
}
