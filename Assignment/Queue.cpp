
#include <bits/stdc++.h>
using namespace std;
#define SIZE 5

class Queue{
   int front,rear;
   int queue[SIZE];
public:
   Queue(){front=-1, rear=-1;}

   void enqueue(int n){
      if((front==0 && rear==SIZE-1)|| (front==rear+1)){
         cout<<"Queue is full!";
         return;
      }
      if(front==-1){
         front=0; rear=0;
      }
      else if(rear==SIZE-1) rear = 0;
      else rear++;

      queue[rear] = n;
   }

   void dequeue(){
      if(front==-1){cout<<"Queue is EMPTY!\n"; return;}
      if(front==rear){front=-1; rear=-1;}
      else if(front==SIZE) front=0;
      else front++;
   }

   void display(){
      cout<<"Front: "<<front<<"rear: "<<rear<<endl;
      if(front<=rear){
         for(int i=front; i<=rear;++i) cout<<queue[i]<<" ";
         cout<<endl;
      }
      else{
         for(int i=front; i<=rear+SIZE;++i){
            cout<<queue[i%5]<<" ";
         }
      }
   }
};

int main(){

   Queue ob;
   ob.enqueue(10);
   ob.enqueue(30);
   ob.enqueue(20);
   ob.enqueue(40);
   ob.enqueue(55);
   ob.dequeue();
   ob.dequeue();
   ob.enqueue(50);
   ob.display();
   return 0;
}