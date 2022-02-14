//
//  main.cpp
//  12157 Tariff Plan
//
//  Created by Moinul Sourav on 2/2/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int t,n,loop=1,x;
    cin>>t;
    while(t--){
        int mile=0,juice=0;
        cin>>n;
        for(int i=0;i<n; i++) {
            cin>>x;
            x++;
            x%30==0? mile += 10*(x/30): mile += 10*((x/30)+1);
            x%60==0? juice += 15*(x/60): juice += 15*((x/60)+1);
        }
        cout<<"Case "<<loop++<<": ";
        mile==juice? cout<<"Mile Juice "<<mile<<endl : mile<juice? cout<<"Mile "<<mile<<endl : cout<<"Juice "<<juice<<endl;
        
        
        
    }
    return 0;
}
