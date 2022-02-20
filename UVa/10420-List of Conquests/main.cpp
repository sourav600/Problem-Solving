#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    map<string, int> m;
    map<string, int>::iterator it;
    int n;
    cin>>n;
    cin.ignore();
    string country, women;
    while(n--){
        cin>>country;
        getline(cin,women);
        m[country]++;
    }
    for(it=m.begin(); it!=m.end(); it++) cout<<it->first<<" "<<it->second<<endl;
    m.clear();

return 0;
}