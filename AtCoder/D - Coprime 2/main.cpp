//
//  main.cpp
//  D - Coprime 2
//
//  Created by Moinul Sourav on 21/8/21.
//

#include <iostream>
#include <vector>
#include<cmath>
#include <iterator>
using namespace std;
int prime[100002],factor[100002];
vector<int> v;
vector<int>::iterator it;


void seive(int m){
    int limit=sqrt(m)+1;
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

void primefactor(int a){
    for (it=v.begin(); it!=v.end(); it++) {
        if (a% *it == 0) {
            v.erase(it);
            while(a% *it==0) a/=*it;
            }
    }

}

int main(int argc, const char * argv[]) {
    
   
    
    int n,m,arr[100002];
    cin>>n>>m;
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    
    v.push_back(2);
    
    seive(m);
    for (int i=0; i<n; i++) {
        primefactor(arr[i]);
    }
    cout<<v.size()<<endl;
    cout<<1<<endl;
    for (it=v.begin(); it!=v.end(); it++) {
        cout<<*it<<endl;
    }
    
    return 0;
}
