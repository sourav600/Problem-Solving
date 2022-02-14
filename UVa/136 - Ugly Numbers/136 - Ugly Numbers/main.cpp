//
//  main.cpp
//  136 - Ugly Numbers
//
//  Created by Moinul Sourav on 25/12/21.
//

#include <iostream>
#include <algorithm>
using namespace std;

long long  arr[1505];
int main(int argc, const char * argv[]) {
    
    long long x=1,y=1,z=1;
    int i=1;
    arr[1]=1;
    while(arr[1500]==0){
        long long a = 2 *arr[x];
        long long b = 3 *arr[y];
        long long c = 5 *arr[z];
        arr[++i] = min(a,min(b,c));
        if(arr[i]==a) x++;
        if(arr[i]==b) y++;
        if(arr[i]==c) z++;
    }
    
    cout<<"The 1500'th ugly number is "<<arr[1500]<<"."<<endl;
    
    
    return 0;
}
