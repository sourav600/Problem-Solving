#include<iostream>
#include<string>
#define ulong unsigned long
using namespace std;

ulong rev(ulong num){
    ulong rev=0;
    while(num>0){
        rev = (rev*10) + num%10;
        num /= 10;
    }
    return rev;
}
ulong palindrome(ulong num){
    if(rev(num) == num) return 0;
    return 1;
}
ulong add(ulong num){
    ulong sum = num + rev(num);
    return sum; 
}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ulong n,number;
    cin>>n;
    while(n--){
        cin>>number;
        number = add(number);
        int loop=1;
        while(palindrome(number)){
            loop++;
            number = add(number);
        }
        cout<<loop<<" "<<number<<endl;
    }

return 0;
}