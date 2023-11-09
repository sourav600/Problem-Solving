#include<bits/stdc++.h>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    float a[10][10], a1[10][10], b[10],b1[10], m[10], n[10];
    int sz;
    //cout<<"Enter array size: ";
    cin>>sz;
    //cout<<"Enter array elements: \n";

    for(int i=0; i<sz; ++i){
        for(int j=0; j<sz; ++j) cin>>a1[i][j];
    }
    //cout<<"Enter rignt side value: ";
    for(int i=0; i<sz; ++i) cin>>b1[i];

    for(int i=0; i<sz; ++i){
        int mx = INT_MIN, pos=0;
        for(int j=0; j<sz; ++j){
            if(mx < a1[i][j]){
                mx = a1[i][j];
                pos = j;
            }
        }
        for(int k=0; k<sz; ++k) a[pos][k] = a1[i][k];
        b[pos] = b1[i];
    }

    cout<<"Rearranging array: \n";
    for(int i=0; i<sz; ++i){
        for(int j=0; j<sz; ++j) cout<<a[i][j]<<" ";
            cout<<endl;
    }
    for(int i=0; i<sz; ++i)  cout<<b[i]<<" ";
        cout<<endl;

    //cout<<"Enter initial value of x ";
    for(int i=0; i<sz; ++i) cin>>m[i];

    //cout<<"Enter the number of iteration: ";
    int k; cin>>k;
    cout<<endl;
    int it=1;
    while(k--){
        cout<<"Iteration "<<it++<<":\n";
        for(int i=0; i<sz; ++i){
            n[i] = b[i] / a[i][i];
            for(int j=0; j<sz; ++j){
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



