
#include <iostream>
using namespace std;
int queue[100], n = 100, front = - 1, rear = - 1;
void Display() {
    system("clear");
   if (front == - 1 || front>rear)
   cout<<"Queue is empty\n"<<endl;
   else {
        cout<<"Queue : ";
        for (int i = front; i <= rear; i++)cout<<queue[i]<<" ";
        cout<<endl;
   }
}
void Insert() {
   int val;
   if (rear == n - 1)
   cout<<"Queue is Empty\n"<<endl;
   else {
      if (front == - 1)
      front = 0;
      cout<<"Insert the element in queue : "<<endl;
      cin>>val;
      rear++;
      queue[rear] = val;
      Display();
   }
}
void Delete() {
   if (front == - 1 || front > rear) {
      cout<<"Queue if Full!\n ";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;
   }
}

int main() {
    system("clear");
    while(1) {
      int ch;
      cout<<"1) Insert element to queue"<<endl;
      cout<<"2) Delete element from queue"<<endl;
      cout<<"3) Exit"<<endl;
      cout<<"Enter your choice : ";
      cin>>ch;
      switch (ch) {
         case 1: Insert();Display();
         break;
         case 2: Delete();Display();
         break;
         case 3: cout<<"Exit"<<endl; return 0;
         break;
         default: cout<<"Invalid choice!\n"<<endl;
      }
   }
   return 0;
}