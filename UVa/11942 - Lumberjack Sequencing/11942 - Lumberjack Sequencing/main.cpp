#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    cout<<"Lumberjacks:\n";
    int t,n,arr[11];
    cin>>t;
    while (t--) {
        int asc=0, dsc=0, i=0;
        n = 10;
        while(n--){
            cin>>arr[i++];
        }
        for(int j=0; j<9; j++){
            if(arr[j]<arr[j+1]) asc++;
            else dsc++;
        }
       
        if(asc==9 || dsc==9) cout<<"Ordered\n";
        else cout<<"Unordered\n";
    }
   
    return 0;
}

