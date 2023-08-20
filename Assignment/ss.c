#include <stdio.h>

int size =5;
int arr[10];
int top=1;

void push(int a){
	if(top-1==size){
		printf("Stack is full\n");
	}
	else{
		arr[top] = a;
		top = top+1;
	}
}

void pop(){
	if(top==1){
		printf("stack is empty!\n");
	}
	else{
		printf("Top is : %d\n",arr[top-1]);
		top = top-1;
	}
}

int main(){
	// int n ; 
	// scanf("%d",&n);
	push(5);
	push(7);
	push(9);
	push(19);
	push(88);
	push(10);
	pop();
	

	return 0;
}