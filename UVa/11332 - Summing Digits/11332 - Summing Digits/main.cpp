#include<iostream>
#define ll long long
using namespace std;

int main(){
    ll n;
    while(cin>>n && n!=0){
        int sum=0;
        while(n>=10){
            sum=0;
            while (n>0) {
                sum += n%10;
                n /= 10;
            }
            n = sum;
        }
        sum==0?cout<<n<<"\n":cout<<sum<<"\n";  //sum==0 when the input value of 'n' is less then 10 (n<10).
    }
    
   
    
    return 0;
}
