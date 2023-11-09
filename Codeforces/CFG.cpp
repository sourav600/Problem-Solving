#include <bits/stdc++.h>
using namespace std;

int pos = 0;
string s;
int n;


int main() {
    #ifndef ONLINE_JUDGE
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    //cout<<"Enter the input string: ";
    cin>>s;
    n = s.size();
    if(s[0]!='a' && s[n-1]!='d'){
        cout<<"Not accepted1\n";
    }else{
        ++pos;
        for(int i=1; i<n-1; ++i){
            if(s[i]=='a' ||s[i]=='d') continue;
            if(s[i]=='b' && s[i+1]=='b'){
                ++i;
            }
            else if(s[i]=='b' && s[i+1]=='c'){
                ++i;
            }
            else {
                cout<<"Not Accepted\n";
                return 0;
            }
        }
        cout<<"Accepted\n";
    }

    return 0;
}
