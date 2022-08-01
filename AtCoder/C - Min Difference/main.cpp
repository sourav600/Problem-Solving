//
//  main.cpp
//  C - Min Difference
//
//  Created by Moinul Sourav on 18/8/21.
//

#include <iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<cstdlib>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,m;
    cin>>n>>m;
    vector<long long> v1;
    vector<long long> v2;
    vector<long long>::iterator it1,it2;
    
    for (int i=0; i<n; i++) {
        int x;
        cin>>x;
        v1.push_back(x);
    }
    for (int i=0; i<m; i++) {
        int y;
        cin>>y;
        v2.push_back(y);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    
    if (v1[0]>v2[0]) {
        it1 = v1.begin();
        it2 = lower_bound(v2.begin(), v2.end(), v1[0]);
        if (it2!=v2.begin()) it2--;
    }
    else {
        it1 = lower_bound(v1.begin(), v1.end(), v2[0]);
        it2 = v2.begin();
        if (it1!=v1.begin()) it1--;
    }
    
    long long temp = abs(*it1 - *it2);
    it1++; it2++;
    
    while(it1!=v1.end() && it2!=v2.end()){
        if (temp>(abs(*it1-*it2)) ) {
            temp = abs(*it1-*it2);
        }
        it1++;
        it2++;
        
    }
    cout<<temp<<endl;
    
    
    
    return 0;
}
