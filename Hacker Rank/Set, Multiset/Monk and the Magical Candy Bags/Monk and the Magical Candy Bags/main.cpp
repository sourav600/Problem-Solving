//
//  main.cpp
//  Monk and the Magical Candy Bags
//
//  Created by Moinul Sourav on 10/8/21.
//

#include <iostream>
#include<set>
#include<iterator>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        multiset<long long> ms;
        while(n--){
            long long a;
            cin>>a;
            ms.insert(a);
        }
        long long total = 0;
        for (int i=0; i<k; i++) {
            auto it = ms.end();
            it--;
            long long candy = (*it);
            total += candy;
            ms.erase(it);
            ms.insert(candy/2);
        }
        cout<<total<<endl;
    }
   
    return 0;
}
