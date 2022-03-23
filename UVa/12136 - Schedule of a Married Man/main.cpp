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
    
    int n,ws1,ws2,we1,we2,ms1,ms2,me1,me2,loop=1;
    cin>>n;
    while(n--){
        scanf("%d:%d %d:%d",&ws1,&ws2,&we1,&we2);
        scanf("%d:%d %d:%d",&ms1,&ms2,&me1,&me2);
        int wstrat = (ws1*60)+ws2;
        int wend = (we1*60)+we2;
        int mstart = (ms1*60)+ms2;
        int mend = (me1*60)+me2;
        cout<<"Case "<<loop++<<": ";
        if(mend<wstrat) cout<<"Hits Meeting\n";
        else if(wend<mstart) cout<<"Hits Meeting\n";
        else  cout<<"Mrs Meeting\n";
    }

return 0;
}