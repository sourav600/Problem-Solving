#include<iostream>
#include<string>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;
#define SIZE 5

template<class type> class stack{    //Generic Stack Class
    type stck[SIZE];
    int tos;
public:
    stack(){
        tos = 0;
        cout<<"Constructing Stack\n";
    }

    void push(type c){
        if(tos==SIZE){
            cout<<"Stack is Full!\n";
            return;
        }
        stck[tos++] = c;
    }
    
    void pop(){
        if(tos==0){
            cout<<"Stack is Empty.\n";
            return;
        }
        tos--;
        cout<<"Pop "<<stck[tos]<<endl;
    }
    
};

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    stack<char> s1;
    s1.push('a');
    s1.push('b');
    s1.push('c');

    stack<double> s2;
    s2.push(100.89);
    s2.push(18.09);
    s2.push(11.67);

    for(int i=0; i<5;i++){
        cout<<"Pop S1: ";
        s1.pop();
    }
    for(int i=0; i<5;i++){
        cout<<"S2 ";
        s2.pop();
    }

return 0;
}