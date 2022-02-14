//
//  main.cpp
//  11559 - Event Planning
//
//  Created by Moinul Sourav on 28/1/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n,b,h,w,ar[100],x;
    while(cin>>n>>b>>h>>w){
        int cost,index=0;
        for(int j=0; j<h; j++){
            int temp = -1;
            cin>>cost;
            for (int i=0; i<w; i++) {
                cin>>x;
                if(x>=n) temp=1;
            }
            int total = n*cost;
            if(temp==1 && b>=total) ar[index++] = total;
        }
        if(index==0) cout<<"stay home\n";
        else{
            int max = ar[0];
            for(int i=1;i<index; i++){
                if(max>ar[i]) max = ar[i];
            }
            cout<<max<<endl;
        }
    }
   
    return 0;
}
