#include<iostream>
#include<string>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;

int seive(int n){
    if(n==2) return 1;
    if(n%2==0) return 0;
    else{
        for(int i=3; i*i<=n; i+=2){
            if(n%i==0){
                return 0;
            }
        }
        return 1;
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    string str;
    while(cin>> str){
        int sum = 0;
        for(int i=0; str[i]!='\0'; i++){
            if(str[i]>='a'&& str[i]<='z') sum+= str[i]-'a'+1;
            else if(str[i]>='A'&&str[i]<='Z') sum+= str[i]-'A'+27;
        }
        if(seive(sum)==1) cout<<"It is a prime word.\n";
        else cout<<"It is not a prime word.\n";
    }
return 0;
}