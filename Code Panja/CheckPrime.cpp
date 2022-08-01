//
//  main.cpp
//  Check Prime
//
//  Created by Moinul Sourav on 22/8/21.
//

#include <iostream>
#include <vector>
#include<cmath>
#include <iterator>
#include <algorithm>
using namespace std;

int prime[100002],factor[100002];
vector<int> v;
vector<int>::iterator it;

void seive(int m){
    int limit=sqrt(m)+1;
    v.push_back(2);
    for(int i=3;i<=limit;i+=2)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=m;j += i*2)
            {
                prime[j]=1;
            }
        }
    }
    for(int i=3;i<=m;i+=2)
    {
        if(prime[i]==0)
        {
            v.push_back(i);
        }
    }
}
int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<"Input : "<<n<<endl;
        seive(10008);
        it = lower_bound(v.begin(), v.end(), n);
        int prime = *it;
        if(prime==n) cout<<"prime"<<endl<<endl;
        else{
            if((prime - n) > (n - (*(--it))) ) cout<<(n - (*it))<<endl<<endl;
            else cout<<(prime-n)<<endl<<endl;
        }
        v.clear();
    }
    return 0;
}
