#include<bits/stdc++.h>
using namespace std;

int main(){

    int x;
    vector<int> v;
    while(cin>>x && getchar()!='\n') v.push_back(x);
    int n=v.size();

     for(int i=0;i<n-1;++i){
        for(int j=0; j<n-i-1; ++j){
            if(v[j] > v[j+1]){
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
     }
     for(int i=0;i<n;++i) cout<<v[i]<<" ";

return 0;
}