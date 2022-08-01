//
//  main.cpp
//  Lenear Keyboard
//
//  Created by Moinul Sourav on 5/11/21.
//

#include <iostream>
#include<string>
#include <unordered_map>
using namespace std;

int main(int argc, const char * argv[]) {
    int t,time=0;
    cin>>t;
    while(t--){
        time=0;
        string str1, str2;
        cin>>str1>>str2;
        unordered_map<char, int> m;
        for (int i=0; i<26; i++) {
            char ch;
            ch = str1[i];
            m[ch] = i+1;
        }
        
        for (int i=0; str2[i+1]!='\0'; i++) {
            char first =  str2[i], second = str2[i+1];
            
            int temp = m[first] - m[second];
            if(temp<0)temp = (-1)*temp;
            
            time += temp;
        }
        cout<<time<<endl;
    }
      return 0;
}
