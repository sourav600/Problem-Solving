//
//  main.cpp
//  12015 - Google is Feeling Lucky
//
//  Created by Moinul Sourav on 29/1/22.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    
    vector<string> v;
    int t,loop=1;
    cin>>t;
    while(t--){
        cout<<"Case #"<<loop++<<":\n";
        int n=10,arr[11],temp=0;
        string str;
        for(int i=0; i<n; i++){
            cin>>str>>arr[i];
            v.push_back(str);
            if(temp<arr[i]) temp=arr[i];
        }
        int j;
        for(j=0; j<10;j++){
            if(arr[j]==temp) cout<<v[j]<<endl;
        }
        v.clear();
    }
    
    return 0;
}
