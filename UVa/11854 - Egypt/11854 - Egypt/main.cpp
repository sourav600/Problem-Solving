//
//  main.cpp
//  11854 - Egypt
//
//  Created by Moinul Sourav on 1/9/21.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    int a,b,c;
    while(cin>>a>>b>>c){
        int count=3;
        if(a==0 && b==0 && c==0) break;
   
        c = c*c;
        b = b*b;
        a = a*a;
        if(abs(a-b) == c) {
            cout<<"right"<<endl;
            count--;
            continue;
        }
        else if(abs(b-c)==a){
            cout<<"right"<<endl;
            count--;
            continue;
        }
        else if(abs(c-a)==b){
            cout<<"right"<<endl;
            count--;
            continue;
        }
        
        if(count==3) cout<<"wrong"<<endl;
        
        
        else cout<<"wrong"<<endl;
    }


    return 0;
}
