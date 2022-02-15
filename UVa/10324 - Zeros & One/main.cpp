#include<iostream>
#include<string>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    string str;
    int loop=1;
    while(cin>>str){
        
        cout<<"Case "<<loop++<<":\n";
        
        int n,a,b;
        cin>>n;
        while(n--){
            
            cin>>a>>b;
            int max,min;
            max = a;
            min = b;
            if(b>a){
                max = b;
                min = a;
            }
            int temp = 0;
            for(int i=min+1; i<=max; i++){
                if(str[min]!=str[i]){
                    cout<<"No\n";
                    temp = 1;
                    break;
                }
            }
            if(temp==0) cout<<"Yes\n";
        }
    }


return 0;
}
