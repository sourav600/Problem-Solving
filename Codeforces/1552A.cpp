//
//  main.cpp
//  1552A
//
//  Created by Moinul Sourav on 30/7/21.
//

#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string str1,str2;
        cin>>str1;
        str2 = str1;
        int count=0;
        sort(str2.begin(),str2.end());
        
        for (int i=0; str1[i]!='\0'; i++) {
            if (str1[i]!=str2[i]) count++;
        }
        cout<<count<<endl;
        
    }
    
    return 0;
}
