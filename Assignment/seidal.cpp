#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define pi acos(-1)
#define ll long long
#define For(i,n) for(ll i=0; i<n; i++)
#define all(x) x.begin(), x.end()

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    float a[10][10], b[10], m[10], n[10];
    int p;
    cout<<"Enter array size: ";
    cin>>p;
    cout<<"Enter array elements: \n";

    for(int i=0; i<p; ++i){
        for(int j=0; j<p; ++j) cin>>a[i][j]; 
    }

    cout<<"Enter rignt side value: ";
    for(int i=0; i<p; ++i) cin>>b[i];

    cout<<"Enter initial value of x ";
    for(int i=0; i<p; ++i) cin>>m[i];

    cout<<"Enter the number of iteration: ";
    int q; cin>>q;
    while(q--){
        for(int i=0; i<p; ++i){
            n[i] = b[i] / a[i][i];
            for(int j=0; j<p; ++j){
                if(i==j) continue;

                n[i] = n[i] - (a[i][j] / a[i][i]) * m[j];
                m[i] = n[i];
            }
            cout<<"x"<<i+1<<"= "<<n[i]<<" ";
        }
        cout<<endl;
    }

return 0;
}



