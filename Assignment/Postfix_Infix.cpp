#include<bits/stdc++.h>
using namespace std;
#define SIZE 100
int Stack[SIZE];
int top=0;
void push(int c){
    if(top==SIZE){
        cout<<"Expression is too long! Stack FUll!\n";
        return;
    }
    Stack[top++] = c;
}
int pop(){
    if(top==0){
        cout<<"Invalid Epression! \nPlease enter a valid expression.\n";
        return -1;
    }
    return Stack[--top];
}

int main(){
    cout<<"Input Format: a b c * + d e ^ - $\nEnter $ to end of Input.\nEnter Expression: ";
    char s;
    while(cin>>s && s!='$'){
        if(s=='+' || s=='-' || s=='*' || s=='/' || s=='^'){
            int a = pop();
            int b = pop();
            //cout<<a<<" "<<b<<nl;
            if(s=='+') push(b+a);
            else if(s=='-') push(b-a);
            else if(s=='*') push(b*a);
            else if(s=='/') push(b/a);
            else if(s=='^') push((pow(b,a)));
        }
        else {
            push(s-'0');
        }
    }
    cout<<"Postfix to infix conversion result: ";
    cout<<pop()<<nl;
return 0;
}