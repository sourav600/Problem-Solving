#include<bits/stdc++.h>
using namespace std;

#define SIZE 5

class Stack{
    int tos;
    int stack[SIZE];
public:
    Stack(){tos=0;}
    void push(int c){
        if(tos==SIZE){
            system("clear");
            cout<<"Stack is FULL\n";
            display();
            return;
        }
        else stack[tos++]=c;
    }
    void pop(){
        if(tos==0){
            system("clear");
            cout<<"Stack is Empty\n";
            return;
        }
        --tos;
    }
    void display(){
        system("clear");
        cout<<"STACK: ";
        if(tos==0) cout<<"Stack is Empty!\n";
        for(int i=0; i<tos; ++i) cout<<stack[i]<<" ";
        cout<<endl;
    }
};
int main(){
    Stack ob;
    system("clear");
    while(1){
        cout<<"****Menu***\n";
        cout<<"\t1. Insert\n\t2. Delete\n\t3. STOP\n";
        cout<<"Enter number according to Menu: ";
        int top=0;
        int x; cin>>x;
        if(x==1){
            int ch;
            cout<<"Enter a integer to push: ";
            cin>>ch;
            ob.push(ch);
            ob.display();
        }
        else if(x==2) {
            ob.pop();
            ob.display();
        }
        else if(x==3) {cout<<"Program END!\n";break;}
        else {
            system("clear");
            cout<<"Please enter a valid integer. \n";
        }
    }

return 0;
}