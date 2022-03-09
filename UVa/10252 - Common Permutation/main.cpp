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

    string str1, str2;
    int arr1[200], arr2[200];
    while(getline(cin, str1) && getline(cin, str2)){
        for(int i='a'; i<='z'; i++) {
            arr1[i]=0;
            arr2[i]=0;
        }
        for(int i=0; str1[i]!='\0'; i++) arr1[str1[i]]++;
        for(int i=0; str2[i]!='\0'; i++) arr2[str2[i]]++;

        for(int i='a'; i<='z';i++){
            while(arr1[i]>0 && arr2[i]>0){
                cout<<(char)i;
                arr1[i]--;
                arr2[i]--;
            }
        }
        cout<<endl;

    }


return 0;
}