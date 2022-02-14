//
//  main.cpp
//  1509 B
//
//  Created by Moinul Sourav on 6/8/21.
//

#include <iostream>
#include<string>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int t=0,m=0;
        
        if(str[n-1]=='M') cout<<"NO"<<endl;
        
        else{
            for (int i=0; i<n && t>=m; i++) {
                if(str[i]=='T') t++;
                else m++;
            }
            
            if (t==(m*2)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    
    return 0;
}
