//
//  main.cpp
//  10976 - Fractions Again?
//
//  Created by Moinul Sourav on 22/8/21.
//

#include <iostream>
#include<vector>

using namespace std;
int main(int argc, const char * argv[]) {
    
    int k;
    while (scanf("%d",&k)==1) {
        vector<pair<int , int>> vp;
        
        for (int x=k+1; x<=2*k; x++) {
            if ((k*x)%(x-k)==0) {
                vp.push_back({x,(k*x)/(x-k)});
            }
        }
        cout<<vp.size()<<endl;
        for (int i=0; i<vp.size(); i++) {
            cout<<"1/"<<k<<" = "<<"1/"<<vp[i].second<<" + "<<"1/"<<vp[i].first<<endl;
        }
        vp.clear();
        
    }
    
    return 0;
}
