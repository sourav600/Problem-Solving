//
//  main.cpp
//  Max Panja Point
//
//  Created by Moinul Sourav on 3/8/21.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int arr[6],point[6]={1,5,10,20,50,100};
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }
    int total = arr[0]*point[0];
    int var = point[0];
    for (int i=1; i<6; i++) {
        if(total<=arr[i]*point[i]){
            total = arr[i]*point[i];
            var = point[i];
        }
    }
    cout<<var<<endl;
    return 0;
}
