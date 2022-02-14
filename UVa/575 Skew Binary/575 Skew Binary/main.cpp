//
//  main.cpp
//  575 Skew Binary
//
//  Created by Moinul Sourav on 10/9/21.
//
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    string str;
    while(cin>>str && str!="0" ){
        int sum=0;
        reverse(str.begin(), str.end());
        for (int i=0; str[i]!='\0'; i++) {
            int num = str[i]-'0';
            sum += num * (pow(2,i+1) - 1);
        }
        cout<<sum<<endl;
    }
    
    return 0;
}
