//
//  main.cpp
//  1586 - Molar mass
//
//  Created by Moinul Sourav on 23/8/21.
//

#include <iostream>
#include<unordered_map>
#include <string>
#include<iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    unordered_map<char, double> m={{'C',12.01},{'H',1.008},{'O',16.00},{'N',14.01}};
    
    int t;
    cin>>t;
    while(t--){
        double count = 0,mol=1,molar=0;
        string str;
        cin>>str;
        for (int i=0,j=0; str[i]!='\0'; i++) {
            if(str[i] == 'C' || str[i]=='H' || str[i]=='O' || str[i]=='N'){
                j = i;
                count += (mol * m[str[j]]);
                molar = 0;
            }
            else{
                while(str[i] != 'C' && str[i]!='H' && str[i]!='O' && str[i]!='N' && str[i]!='\0'){
                    molar = (molar*10) + (str[i]-'0');
                    mol = molar;
                    i++;
                }
                count += ((mol-1) * m[str[j]]);
                
                mol=1;
                molar = 0;
                i--;
            }
        }
        cout<<fixed<<setprecision(3)<<count<<endl;
    }
   
    return 0;
}
