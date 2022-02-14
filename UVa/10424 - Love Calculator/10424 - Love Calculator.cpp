#include<iostream>
#include<string>
using namespace std;

int main(){
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    string str1,str2;
    while(getline(cin,str1)&&getline(cin,str2)){
        int sum1=0, sum2=0;
        for(int i=0; str1[i]!='\0';i++){
            if(str1[i]>=65 && str1[i]<=90) str1[i] += 32;
            if(str1[i]>=97 && str1[i]<=122) sum1 += str1[i] - 'a' + 1;
        }
        for(int i=0; str2[i]!='\0';i++){
            if(str2[i]>=65 && str2[i]<=90) str2[i] += 32;
            if(str2[i]>=97 && str2[i]<=122) sum2 += str2[i] - 'a' + 1;
        }
        //cout<<sum1<<" "<<sum2<<endl;
        while(sum1>9){
            int num=0;
            while(sum1>0){
                num += sum1 % 10;
                sum1 /= 10;
            }
            sum1 = num;
        }
        while(sum2>9){
            int num=0;
            while(sum2>0){
                num += sum2 % 10;
                sum2 /= 10;
            }
            sum2 = num;
        }
            float ans;
            sum1>sum2? ans = (float)((sum2*100)/(float)sum1) : ans = (float)((sum1*100)/(float)sum2);
            printf("%.2f ",ans);
            cout<<"%\n";
    }
    return 0;
}