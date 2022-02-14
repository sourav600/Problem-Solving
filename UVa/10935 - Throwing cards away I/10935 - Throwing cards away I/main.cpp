//
//  main.cpp
//  10935 - Throwing cards away I
//
//  Created by Moinul Sourav on 30/8/21.
//

#include <iostream>
#include<queue>
#include<vector>
using namespace std;
int main(int argc, const char * argv[]) {
    queue<int> q;
    vector<int> v;
    int n;
    while(cin>>n){
        if(n==0) break;
        else if(n==1){
            cout<<"Discarded cards:"<<endl;
            cout<<"Remaining card: 1"<<endl;
            continue;
        }
        else if(n==2){
            cout<<"Discarded cards: 1"<<endl;
            cout<<"Remaining card: 2"<<endl;
            continue;
        }
        for (int i=1; i<=n; i++) {
            q.push(i);
        }
        while(q.size() > 2){
            v.push_back(q.front());
            q.pop();
            q.push(q.front());
            q.pop();
        }
        v.push_back(q.front());
        q.pop();
        int remain = q.front();
        q.pop();
        
        cout<<"Discarded cards: ";
        int i;
        for (i=0; i < v.size()-1; i++) {
            cout<<v[i]<<", ";
        }
        cout<<v[i]<<endl;
        
        cout<<"Remaining card: "<<remain<<endl;
        v.clear();
        
    }
  
    return 0;
}
