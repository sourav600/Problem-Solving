//
//  main.cpp
//  1551-B1
//
//  Created by Moinul Sourav on 28/7/21.
//

#include <iostream>
#include <string>
#include<list>
#include<iterator>
#include<algorithm>

using namespace std;

int arr[27];
int main(int argc, const char * argv[]) {
    
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int count=0;
        
        for(int i=0;i<27;i++) arr[i]=0;
        
        for(int i=0;str[i]!='\0';i++){
            int ch = str[i] - 'a' + 1;
            arr[ch]++;
        }
        
        for (int i=1; i<27; i++) {
            if(arr[i]==1) count++;
            else if (arr[i]>=2) count+=2;
            else continue;
        }
        cout<<count/2<<endl;
        count=0;
    }
    
    return 0;
}
