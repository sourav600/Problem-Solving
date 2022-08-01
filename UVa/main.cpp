#include<iostream>
#include<string>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    string str;
    int arr[130],i,j,loop=1;
    for(i=0;i<=130;i++) arr[i]=0;
    
    while(getline(cin,str))
    {
        if(loop++ > 1) printf("\n");
        for(i=0;str[i]!='\0';i++){
            j=str[i];
            arr[j]++;
        }
        for(i=0;str[i]!='\0';i++){
            for(j=127;j>=32;j--)
                if(arr[j]==i) printf("%d %d\n",j,i);
        }
        
        for(i=0;i<=130;i++) arr[i]=0;
        //str[0]='\0';
    }
    return 0;
}