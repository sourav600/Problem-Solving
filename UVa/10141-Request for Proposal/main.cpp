#include<iostream>
#include<string>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n,p,loop=1;
    string str,final;
    float price=0;
    while(cin>>n>>p && n!=0 && p!=0){
        cin.ignore();
        if(loop>1)cout<<endl;
        cout<<"RFP #"<<loop++<<endl;
        float compliance = 1000.1;
        for(int i=0; i<n; i++) getline(cin, str);
        while(p--){
            string name;
            getline(cin,name);
            float d;
            int r;
            string s;
            cin>>d>>r;
            cin.ignore();
            for(int i=0; i<r; i++) getline(cin,s);
            if(compliance>(float)n/r){
                compliance = (float)n/r;
                final = name;
                price = d;
            }
            else if(compliance==(float)n/r){
                if(price==d) continue;
                else if(price>d || price==0) {
                    price=d;
                    final = name;
                }
            }
        }
        
        cout<<final<<endl;
    }

return 0;
}