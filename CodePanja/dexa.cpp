#include<bits/stdc++.h>

using namespace std;

    int sum( string s){
        int ans=0;
        for(int i=0; i<s.size();++i){
            ans += (int)(s[i]-'0');
        }
        return ans;
    }

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("../Input.txt", "r", stdin);
    // freopen("../Output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s;
    int n; cin>>s>>n;
    if(n==1){
        cout<<"0\n";
        return 0;
    }
    int x = sum(s);
    int r;
    string s1;
    while(x>0){
        r = x%n;
        char ch;
        if(r<10) ch = 48+r;
        else{
            ch = r+55;
        }
        s1 += ch;
        x /= n;
    }
    reverse(s1.begin(), s1.end());
    cout<<s1<<endl;


return 0;
}



