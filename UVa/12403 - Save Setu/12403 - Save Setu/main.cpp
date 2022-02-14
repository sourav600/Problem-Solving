//
//  main.cpp
//  12403 - Save Setu
//
//  Created by Moinul Sourav on 5/1/22.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    int sum=0;
    while(t--){
        string str;
        cin>>str;
        if(str[0]=='d'){
            int tk;
            cin>>tk;
            sum+=tk;
        }
        else cout<<sum<<endl;
    }
   
    return 0;
}
