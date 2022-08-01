//
//  main.cpp
//  C - Distribution
//
//  Created by Moinul Sourav on 14/8/21.
//

#include <iostream>
using namespace std;

int s[200002],t[200002],gem[200002];
int main() {
    
    
    int n;
    cin>>n;
    
    for (int i=0; i<n; i++) {
        cin>>s[i];
    }
    for (int i=0; i<n; i++) {
        cin>>t[i];
    }
    gem[0] = t[0];
    int temp = t[0];
    
    for (int i=1; i<n; i++) {
        if (t[i]<temp+s[i-1]){
            gem[i]=t[i];
            temp = t[i];
        }
        else{
            gem[i] = temp+s[i-1];
            temp += s[i-1];
        }
    }
   
    temp = gem[n-1]+s[n-1];
    for (int j=n-1,k=0; gem[k]>temp; j=(j+1)%n,k=(k+1)%n) {
        gem[k] = temp;
        temp += s[k];
    }
    
    for (int i=0; i<n; i++) {
        cout<<gem[i]<<endl;
        gem[i]=0;
    }
    
    
    return 0;
}
