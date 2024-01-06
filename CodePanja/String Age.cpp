//
//  main.cpp
//  String Age
//
//  Created by Moinul Sourav on 22/8/21.
//

#include <iostream>
#include<string>
using namespace std;

int arr1[27],arr2[27];
int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    for (int i=0; i<n; i++) {
        string s1,s2;
        cin>>s1>>s2;
        for (int j=0; s1[j]!='\0'; j++) arr1[s1[j]-'a'] += 1;
        for (int j=0; s2[j]!='\0'; j++) arr2[s2[j]-'a'] += 1;
        int k,index=26;
        for ( k=25; arr1[k]==arr2[k]; k--) index=k;
        index--;
        if(index<0) cout<<"Data set #"<<i+1<<": Both are the same age"<<endl<<endl;
        else if(arr1[index] > arr2[index]) cout<<"Data set #"<<i+1<<": S1 is older"<<endl<<endl;
        else cout<<"Data set #"<<i+1<<": S1 is younger"<<endl<<endl;
        
        for (int l=0; l<26; l++) {
            arr1[l]=0;
            arr2[l]=0;
        }
    }
    return 0;
}
