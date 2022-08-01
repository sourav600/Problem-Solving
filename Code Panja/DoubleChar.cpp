#include <iostream>
#include<string>
#include<algorithm>
 
using namespace std;
int arr[27];
int main() {
    int t;
    cin>>t;
    while(t--){
        string str,str1;
        cin>>str;
        str1=str;
        int count=0;
        sort(str.begin(),str.end());
        for(int i=0;i<27;i++) arr[i]=0;
        for (int i=0;str[i]!='\0';i++){
            int index = str[i] - 'a' + 1;
            arr[index] += 1;
        }
        for (int i=1; i<27 && count==0; i++) {
            if(arr[i]==0 || arr[i]==2) count = 0;
            else count=1;
        }
        if (count==0) cout<<str1<<" --- double char"<<endl<<endl;
        else cout<<str1<<" --- not double char"<<endl<<endl;
    }
    return 0;
}

