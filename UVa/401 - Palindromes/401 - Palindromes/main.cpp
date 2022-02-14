//
//  main.cpp
//  401 - Palindromes
//
//  Created by Moinul Sourav on 6/12/21.
//

#include <iostream>
#include <string>
#include<unordered_map>
using namespace std;

int palindrome(string s,int end){
    int srt = 0;
    
    while(end>srt){
        if(s[srt++] != s[end--]) return -1;
    }
    return 1;
}


int main(int argc, const char * argv[]) {
    
    unordered_map<char, char> m = {{'A','A'}, {'E','3'}, {'H','H'},{'I','I'},{'J','L'},{'L','J'},{'M','M'},{'O','O'},{'S','2'},{'T','T'},{'U','U'},{'V','V'},{'W','W'},{'X','X'},{'Y','Y'},{'Z','5'},{'1','1'},{'2','S'},{'3','E'},{'5','Z'},{'8','8'}};
    
    string s;
    while(getline(cin,s)){
        int n = (int)s.size();
        int p = palindrome(s,n-1);
        
        
        
        //mirror
        int mir = 1;
        for(int i=0; s[i]!='\0';i++){
            if(m[s[i]] != s[--n]){
                mir = -1;
                break;
            }
        }
        
        if(mir==1 && p==1) cout<<s<<" -- is a mirrored palindrome.\n\n";
        else if (p==1) cout<<s<<" -- is a regular palindrome.\n\n";
        else if(mir==1) cout<<s<<" -- is a mirrored string.\n\n";
        else cout<<s<<" -- is not a palindrome.\n\n";
        
    }
    
    
    
    
    
    return 0;
}
