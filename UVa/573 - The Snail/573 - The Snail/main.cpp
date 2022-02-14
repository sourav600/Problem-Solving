//
//  main.cpp
//  573 - The Snail
//
//  Created by Moinul Sourav on 7/2/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int h,u,d;
    float f;
    while(cin>>h>>u>>d>>f){
         while(f>=1) f /= 10.0;
        float cal = u, temp = u;
        int day = 1, check=0;
        while(cal<=h && cal>0.0 && check==0){
            day++;
            cal -= d;
            temp -= f;
            if(temp<0.0){
                cout<<"failure on day ";
                check=1;
            }
            cal += temp;
        }
        if(check==0) cout<<"success on day ";
        cout<<day<<endl;
    }
   
    return 0;
}
