#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    vector<int> v;
    unordered_map<int, int> um;
    int n,m,c,x,Sequence=1;
    while(cin>>n>>m>>c && n!=0 && m!=0 && c!=0){
        //if(Sequence>1) cout<<endl;
        cout<<"Sequence "<<Sequence++<<endl;
        int use =0, maximal=0,check=0;
        while(n--){
            cin>>x;
            v.push_back(x);
        }
        while(m--){
            cin>>x;
            um[x]++;
            if(um[x]%2){
                use += v[x-1];
                maximal = max(use,maximal);
                if(use>c) check = 1;
            }
            else use -= v[x-1];
        }
        if(use<=c && check==0) {
            cout<<"Fuse was not blown."<<endl;
            cout<<"Maximal power consumption was "<<maximal<<" amperes."<<endl<<endl;
        }
        else{
            cout<<"Fuse was blown."<<endl<<endl; 
        }

        v.clear();
        um.clear();

    }
return 0;
}