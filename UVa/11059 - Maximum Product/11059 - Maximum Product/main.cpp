//
//  main.cpp
//  11059 - Maximum Product
//
//  Created by Moinul Sourav on 22/8/21.
//

#include <iostream>
#include<algorithm>

using ll=long long;

using namespace std;
int main(int argc, const char * argv[]) {
    int n,loop=0,arr[20];
        ll product,x;
        while(cin>>n){
            loop++;
            product=0;
            x=1;
            for(int i=0;i<n;i++) cin>>arr[i];
            
            for(int i=0;i<n;i++){
                x=arr[i];
                product=max(product,x);
                for(int j=i+1;j<n;j++){
                    x*=arr[j];
                    product=max(product,x);
                }
            }
          
            if(product < 0) product=0;
            cout<<"Case #"<<loop<<": The maximum product is "<<product<<"."<<endl<<endl;
        }
    return 0;
}
