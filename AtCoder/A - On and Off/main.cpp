//
//  main.cpp
//  A - On and Off
//
//  Created by Moinul Sourav on 21/11/21.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
   
    int s,t,x;
    cin>>s>>t>>x;
    if(s==0) s = 24;
    if(t==0) t = 24;
    if(x==0) x = 24;
    
    if(s<=x && x<=t) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
    return 0;
}
