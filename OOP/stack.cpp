#include<iostream>
#include<string>
using namespace std;
typedef long long ll;
typedef unsigned long ulong;
#define SIZE 5

class stack{
    char stck[SIZE];
    char who;
    int tos;
public:
    stack(char s){
        who = s;
        tos = 0;
        cout<<"Constructing Stack "<<who<<endl;
    }
    void push(char c){
        if(tos==SIZE){
            cout<<"Stack "<<who<<" is Full!\n";
            return;
        }
        stck[tos++] = c;
    }
    void pop(){
        if(tos==0){
            cout<<"Stack "<<who<<" is Empty.\n";
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

    stack s1('A'), s2('B');
    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');
    // s1.push('d');
    // s1.push('e');
    // s1.push('f');
    
    
    
    // s2.push('p');
    // s2.push('q');
    

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