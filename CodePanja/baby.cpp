#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
#include<utility>
#include<iterator>

using namespace std;

#define nl '\n'
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define pb(x) push_back(x)
#define pi acos(-1)
typedef long long ll;
typedef unsigned long ulong;

int main(){
        #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    unordered_map<string, int> m;
    unordered_map<string, string> um{{"i","-> one"},{"ii","-> two"},{"iii","-> three"},{"iv","-> four"},{"v","-> five"},{"vi","-> six"},{"vii","-> seven"},{"viii","-> eight"},{"ix","-> nine"},{"x","-> ten"}};
    unordered_map<string, string>::iterator it;
    
    string s;
    
    int t; cin>>t;
    int count=0;
    while(t--){
        
        cin>>s;
        it = um.find(s);
        if(count<10){
            if(m[s]==0) cout<<"H ";
            else cout<<"M ";
        }
        else cout<<"M ";
        if(it!=um.end()){
            cout<<s<<" "<<um[s]<<nl;
            m[s]++;
            if(m[s]==0) count++;
        }
        else {
            cout<<s<<" -> NR\n";
        }
        
    }
    
return 0;
}