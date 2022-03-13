#include<iostream>
#include<string>
#include<vector>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector<int> v;
    int t,n,x;
    cin>>t;
    while(t--){
        int sum = 0,count=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            v.push_back(x);
            sum+=x;
        }
        int avg = sum/n;
        for(int i=0;i<n;i++){
            if(v[i]>avg) count++;
        }
        float ans = (float)(count*100.00)/n;
        printf("%.3f",ans);
        cout<<"%\n";
        v.clear();
    }

return 0;
}