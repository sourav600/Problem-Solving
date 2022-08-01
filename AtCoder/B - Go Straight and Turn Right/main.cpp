#include<iostream>
#include<string>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int arr[]={1,-1,-1,1};
    string str;
    int n,x=0,y=0,index=0;
    cin>>n>>str;
    for(int i=0; i<n; i++){
        if(str[i]=='S'){
            if(index%2==1){
                y+= arr[index];
            } 
            else x+=arr[index];
        }
        else index = (index+1)%4;
    }
    cout<<x<<" "<<y<<endl;

return 0;
}