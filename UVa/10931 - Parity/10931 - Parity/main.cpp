//
//  main.cpp
//  10931 - Parity
//
//  Created by Moinul Sourav on 6/9/21.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    vector<int> v;
    while(scanf("%d",&n) && n){
    
        int count =0;
        while (n>0) {
            if(n%2) count++;
            v.push_back(n%2);
            n /= 2;
        }
        reverse(v.begin(), v.end());
        cout<<"The parity of ";
        for (int i=0; i!=v.size(); i++) {
            cout<<v[i];
        }
        cout<<" is "<<count<<" (mod 2)."<<endl;
        v.clear();
    }
  
    return 0;
}
