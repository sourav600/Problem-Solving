#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;

class strtype{
    char *ptr;
    int len;
public:
    strtype(char *s){
        len = strlen(s);
        ptr = (char *) malloc(len+1);
        if(!ptr){
            cout<<"Allocation Error!\n";
            exit(1);
        }
        strcpy(ptr, s);
    }
    void show(){
        cout<<ptr<<"-Length "<<len<<endl;
    }

};

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    strtype s1("This is S1"), s2("This is S2");
    s1.show(); 
    s2.show();

return 0;
}