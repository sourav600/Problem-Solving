#include<iostream>
#include<string>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n,p;
    string str,final;
    while(cin>>n>>p && n!=0 && p!=0){
        float compliance = 1000.1;
        for(int i=0; i<n; i++) getline(cin>> ws, str);
        while(p--){
            string name;
            getline(cin>>ws,name);
            float d;
            int r;
            string s;
            cin>>d>>r;
            //cout<<r<<endl;
            for(int i=0; i<r; i++) getline(cin>>ws,s);
            //cout<<r<<" "<<n<<" "<<(float)r/n<<endl;
            if(compliance>(float)n/r){
                compliance = (float)n/r;
                final = name;
            }
        }
        cout<<final<<endl;
    }

return 0;
}