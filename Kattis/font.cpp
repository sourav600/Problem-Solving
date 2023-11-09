#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'



int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n; 
    cin>>n;
    cin.ignore();
    vector<string> s(n);
    for(int i=0; i<n; ++i){
        cin>>s[i];
    }
    //calculate all string set bit
    vector<int> bit(n,0);
    for(int i=0; i<n; ++i){     // complexity O(25*100)
        for(auto ch : s[i]){
            bit[i] = bit[i] | (1<<(ch-'a'));
        }
    }

    int ans = 0;
    for(int i=0; i < (1<<n); ++i){  //complexity O(25 * 2^25)
        int a=0;
        for(int j=0; j<n; ++j){  
            if(i & (1<<j)) {
                //cout<<s[j]<<" ";
                a = a | bit[j];
            }
        }
        if(__builtin_popcount(a)==26) ++ ans;
    }
cout<<ans;
    
return 0;
}
