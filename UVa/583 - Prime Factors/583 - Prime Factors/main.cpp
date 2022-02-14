//
//  main.cpp
//  583 - Prime Factors
//
//  Created by Moinul Sourav on 25/1/22.
//
#include<iostream>
#include<vector>
#include<set>
#include<iterator>
#define MAX 100000002
using namespace std;

bool marked[MAX];
vector<int> v;

void sieve()
{
    
    int i,j;
    for(i=3;i*i<=MAX;i+=2)
    {
        if(marked[i]==false)
        {
            for(j=i*i;j<=MAX;j=j+i) marked[j]=true;
        }
    }
    v.push_back(2);
    for(i=3;i<=MAX;i+=2)
    {
        if(marked[i]==false) v.push_back(i);
    }
}
int main()
{
    sieve();
    
    int n;
    while(cin>>n && n!=0){
       
        int copy = n;
        if(n<0) n *= -1;
        if(n==1){
            cout<<copy<<" = ";
            copy==1?cout<<"\n":cout<<"-1 x\n";
            continue;
        }
        if(n==2147483647){
            cout<<copy<<" = ";
            copy==2147483647?cout<<copy<<"\n":cout<<"-1 x "<<copy<<"\n";
            continue;
        }
        multiset<int> s;
        multiset<int>::iterator it;
        
        for(int i=0; v[i]*v[i]<=n; i++){
            while(n%v[i]==0){
                s.insert(v[i]);
                n /= v[i];
            }
        }
        
        if(n != 1 || s.size()==0) s.insert(n);
        
        cout<<copy<<" = ";
        if(copy<0) cout<<"-1 x ";
        it = s.begin();
        cout<<*it;
        it++;
        for(;it!=s.end(); it++) cout<<" x "<<*it;
        cout<<endl;
        s.clear();
    }
    return 0;
}
