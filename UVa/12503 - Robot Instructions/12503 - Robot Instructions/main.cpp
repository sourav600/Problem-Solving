
#include <iostream>
#include<string>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int t,ar[101],n;
    string str;
    cin>>t;
    while(t--){
        int ans = 0, index = 0;
        cin>>n;
        getline(cin, str );
        for(int i=0; i<n; i++){
            getline(cin, str);
            
            if(str == "LEFT") ar[index++] = -1;
            else if (str=="RIGHT") ar[index++] = 1;
            else{
                int size = str.size();
                int last;
                size==9? last = str[--size]-'0' :  last = (str[--size]-'0') + (10*(str[--size]-'0'));
                ar[index++] = ar[last-1];
            }
            
           
        }
        for(int i=0; i<n; i++) ans += ar[i];
        cout<<ans<<endl;
        
    }
    
    return 0;
}
