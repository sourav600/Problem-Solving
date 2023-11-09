#include<bits/stdc++.h>
using namespace std;

int main(){
    char arr[10],brr[10];

    cout<<"enter 4 bit for genrating Hamming Code: ";
    cin>>arr[3]>>arr[5]>>arr[6]>>arr[7];
    //generating hamming code
    arr[1] = ((arr[3]-'0')^(arr[5]-'0')^(arr[7]-'0'))+'0';
    arr[2] = ((arr[3]-'0')^(arr[6]-'0')^(arr[7]-'0'))+'0';
    arr[4] = ((arr[5]-'0')^(arr[6]-'0')^(arr[7]-'0'))+'0';
    cout<<"Hamming code is: ";
    for(int i=1; i<=7; ++i) cout<<arr[i];

    //Error detection and currection
    cout<<"\nEnter reciever data: ";
    for(int i=1; i<=7; ++i) cin>>brr[i];

    int c1 = (brr[1]-'0')^(brr[3]-'0')^(brr[5]-'0')^(brr[7]-'0');
    int c2 = (brr[2]-'0')^(brr[3]-'0')^(brr[6]-'0')^(brr[7]-'0');
    int c4 = (brr[4]-'0')^(brr[5]-'0')^(brr[7]-'0')^(brr[7]-'0');
    int pos = (c1*1)+(c2*2)+(c4*4);
    if(pos==0) cout<<"No error\n";
    else cout<<"Error bit position is: "<<pos<<endl;

    cout<<"Error correction: ";
    for(int i=1; i<=7; ++i){
        if(i==pos){
            if(brr[i]=='1') cout<<0;
            else cout<<1;
        }
        else cout<<brr[i];
    }cout<<endl;

    return 0;
}
