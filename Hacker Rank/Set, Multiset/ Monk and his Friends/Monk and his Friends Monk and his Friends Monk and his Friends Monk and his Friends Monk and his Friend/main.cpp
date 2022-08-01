//
//  main.cpp
//  Monk and his Friends Monk and his Friends Monk and his Friends Monk and his Friends Monk and his Friend
//
//  Created by Moinul Sourav on 10/8/21.
//

#include <iostream>
#include<unordered_set>
#define ll long long
using namespace std;

int main(int argc, const char * argv[]) {
    
    int t;
    cin>>t;
    unordered_set<long long> s;
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        while (n--) {
             ll a;
            scanf("%lld",&a);
            s.insert(a);
        }
        while (m--) {
            ll b;
            scanf("%lld",&b);
            auto it = s.find(b);
            s.insert(b);
            if(it != s.end()) cout<<"YES\n";
            else cout<<"NO\n";
        }
        s.clear();
    }
    
    return 0;
}
