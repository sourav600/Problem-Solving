#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

vector<pair<int,int> > vp;
void hanoi(int n, int from, int via, int to){
    if(n==0) return;
    hanoi(n-1, from, to, via);
    vp.push_back({from,to});
    hanoi(n-1, via,from,to);
}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int n; cin>>n;
    hanoi(n,1,2,3);
    cout<<vp.size()<<nl;
    for(auto it: vp) cout<<it.first<<" "<<it.second<<nl;

return 0;
}
