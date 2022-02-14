//
//  main.cpp
//  Mina & Raju
//
//  Created by Moinul Sourav on 28/8/21.
//

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(int argc, const char * argv[]) {
    int n,q,x,loop=0;
    vector<int> v;
    while(1){
    loop++;
        cin>>n>>q;
        if (n==0 && q==0) break;
        while(n--) {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        cout<<"CASE# "<<loop<<":"<<endl;
        for(int i=1;i<=q;i++){
            
            cin>>x;
            int j;
            for(j=0;j<v.size();j++){
                if(v[j]==x) {
                    cout<<x<<" found at "<<j+1<<endl;
                    break;
                }
            }
            if(j==v.size()) cout<<x<<" not found"<<endl;
            
        }
        v.clear();
    }
    return 0;
}
