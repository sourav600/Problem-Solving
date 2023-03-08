#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;
#define nl '\n'
#define For(i,n) for(int i=1; i<=n; i++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define mi map<int,int>
#define umi unordered_map<int,int>
#define pb(x) push_back(x)
#define pi acos(-1)
const ll M = 1000000007;

void solve(int tc){
    int n; cin>>n;
    vi v(n+1);
    vector< pair<int,int> > vp;
    bool allEqual = true, isOne = false;
    int min_value = INT_MAX, min_index = 1;
    For(i,n){
        cin>>v[i];
        v[0]=v[1];
        if(v[i]!=v[i-1]) allEqual = false;
        if(v[i]==1) isOne=true;
        if(min_value>v[i]){
            min_value=v[i];
            min_index = i;
        }  
    }
    if(allEqual){
        cout<<0<<nl;
    }
    else if(isOne){
        cout<<-1<<nl;
    }
    else{
        int mx_value = INT_MIN, mx_index = 0; 
        For(i,n){
            if(mx_value < v[i]){
                mx_value = v[i];
                mx_index = i;
            }
        }
        while(mx_value != min_value){
            v[mx_index] = ceil((mx_value*1.0) / (min_value*1.0));
            vp.push_back(make_pair(mx_value,min_value));

            if(v[mx_index] < min_value){
                min_value = v[mx_index];
                min_index = mx_index;
            }
            For(i,n){
                if(mx_value < v[i]){
                    mx_value = v[i];
                    mx_index = i;
                }
            }
        }
        cout<<vp.size()<<nl;
        for(auto it : vp){
            cout<<it.first<<" "<<it.second<<nl;
        }
        
    }

}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif

    int t,tc=1; cin>>t;
    while(t--)
    solve(tc++);

return 0;
}