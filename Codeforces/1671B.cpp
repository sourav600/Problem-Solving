#include<bits/stdc++.h>
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
        int check=0;
        cin>>n;
        for(int i=0; i<n; i++){cin>>x; v.push_back(x);}
        for(int i=0; i<n-1 && check==0; i++){
            if(v[i+1]-v[i] > 3){check=1; break;}
            else if(v[i+1]-v[i] == 3){
                i++;
                while(i<n-1)if(v[i+1]-v[i]!=1){ check=1; break;}
            }
            else if(v[i+1]-v[i]==2)v[i+1]--;
        }
        if(check==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
return 0;
}