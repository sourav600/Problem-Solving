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
    
    vector<int> v;
    vector<int>::iterator it;
    int n,x,m;
    while(cin>>n){
        while(n--){
            cin>>x;
            v.push_back(x);
        }
        cin>>m;
        int mid = m/2;
        sort(v.begin(),v.end());
        if((mid*2)==m && find(v.begin(), v.end(), mid) != v.end()) v.erase(find(v.begin(), v.end(), mid)); 
        it = lower_bound(v.begin(),v.end(),mid);
        int temp = m - (*it);
        mid = *it;
        cout<<mid<<endl;
        while(find(v.begin(),v.end(),temp) == v.end()){
            it = lower_bound(v.begin(),v.end(),mid);
            mid = *it;
            int temp = m - (*it);
        }
        cout<<"Peter should buy books whose prices are "<<*it<<" and "<<m-(*it)<<".\n\n";
        v.clear();
    }


return 0;
}