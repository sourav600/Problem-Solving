//
//  main.cpp
//  Spiral Sum (accepted)
//
//  Created by Moinul Sourav on 18/11/21.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    int loop=0;
    while(t--)
    {
           long long int n;
           cin>>n;
           long long sum=0;
           for(long long int i=n;i>1;i-=2)
           {
                  long long int a=i*i-(i/2);
                  long long int b=a-(i-1);
                  long long int c=b-(i-1);
                  long long int d=c-(i-1);
                  
                  sum+=(a+b+c+d);
           }
          cout<<"Case "<<++loop<<": "<<sum+1<<endl;
    }
    return 0;
}
