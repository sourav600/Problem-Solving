#include<bits/stdc++.h>

using namespace std;

bool checkFirst(string s)
{
    if(s[0]=='1')
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool checkAll(string s)
{
    bool flag = true;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i]!='1' && s[i]!='0')
        {
            flag=false;
        }
    }
    return flag;
}

int main(){

    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t,tc=1; cin>>t;
    while(t--){
        cin.ignore();
        string s; cin>>s;
        if (s.size()==1)
        {
            if (s[0]=='1' || s[0]=='0')
            {
                cout<<"1\n";
            }
            else
            {
                cout<<"0\n";
            }
        }
        else
        {
            bool f1=checkFirst(s);
            bool f2=checkAll(s);
            if (f1==true && f2==true)
            {
                cout<<"1\n";
            }
            else
            {
                cout<<"0\n";
            }
        }
    }


return 0;
}



