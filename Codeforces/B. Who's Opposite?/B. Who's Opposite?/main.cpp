//
//  main.cpp
//  B. Who's Opposite?
//
//  Created by Moinul Sourav on 18/8/21.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int n = abs(a-b);
        int size = n*2;
        if (a>size || b>size || c>size) {
            cout<<-1<<endl;
        }
        else{
            if (c+n > size) cout<<c-n<<endl;
            else cout<<c+n<<endl;
        }
    }
    return 0;
}
