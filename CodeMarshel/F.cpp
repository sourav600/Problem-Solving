#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

int main(){

    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif

    int t; cin>>t;
    unordered_map<string,string> time;
    unordered_map<string,string> um;
    unordered_map<string,int> mp;
    unordered_map<string,int> um1;
    map<int,int> um2;
    
    while(t--){
        string a,email,grade;
        
        cin>>a>>email;
        int d,m,y;
        scanf("%d/%d/%d",&d,&m,&y);
        cin.ignore();
        cin>>grade;

        //cout<<time[email]<<nl;

        //for grade
        if(um[email]==""){
            ++um1[grade];
        }
        else{
            if(time[email] < a){
                --um1[um[email]];
                ++um1[grade];
            }
            
        }
        um[email] = grade;

        //for year
        if(mp[email]==0){
            um2[y]++;
        }
        else{
            if(time[email] < a){
                um2[mp[email]]--;
                um2[y]++;
            }
        }
        mp[email] = y;
        time[email] = a;
    }
    cout<<"A+ "<<um1["A+"]<<nl<<"A- "<<um1["A-"]<<nl<<"AB+ "<<um1["AB+"]<<nl<<"AB- "<<um1["AB-"]<<nl<<"B+ "<<um1["B+"]<<nl<<"B- "<<um1["B-"]<<nl<<"O+ "<<um1["O+"]<<nl<<"O- "<<um1["O-"]<<nl;
    for(auto it: um2) {
        if(it.second!=0)
            cout<<it.first<<" "<<it.second<<nl;
    }

return 0;
}