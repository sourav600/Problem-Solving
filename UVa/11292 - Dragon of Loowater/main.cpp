#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector<int> v1, v2;
    vector<int>::iterator it;
    int n,m,x;
    while(cin>>n>>m && n!=0 && m!=0){
        int sum=0, temp=0;
        for(int i=0; i<n;i++) {
            cin>>x;
            v1.push_back(x);
        }
        for(int i=0; i<m; i++){
            cin>>x;
            v2.push_back(x);
        }
        if(n>m){
            cout<<"Loowater is doomed!\n";
            v1.clear();
            v2.clear();
            continue;
        }
        sort(v2.begin(), v2.end());
        for(int i=0; i<v1.size(); i++){
            it = lower_bound(v2.begin(), v2.end(), v1[i]);
            if(it==v2.end()){
                cout<<"Loowater is doomed!\n";
                temp=1;
                break;
            }
            else{
                sum += *it;
                v2.erase(it);
            }
        }
        if(temp==0) cout<<sum<<endl;
        v1.clear();
        v2.clear();
    }
return 0;
}