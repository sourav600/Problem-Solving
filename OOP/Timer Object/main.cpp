#include<iostream>
#include<ctime>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;

class timer{
    clock_t srt;
public:
    timer();
    ~timer();
};
timer::timer(){
    srt = clock();
}
timer::~timer(){
    clock_t end;
    end = clock();
    cout<<"Time= "<<(end-srt) / CLOCKS_PER_SEC<<"\n";
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    timer ob;
    int a;
    cout<<"Press a key followed by enter: ";
    cin>>a;

return 0;
}