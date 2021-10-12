#include <stdio.h>
#include <stdbool.h>
#include<stdlib.h>
#define SIZE 10
int a[SIZE];
int top=-1;
bool isEmpty(){
	if(top == -1){
		return true;
	}
	return false;
}
bool isFull(){
	if(top==10){
		return true;
	}
	return false;
}
void pop(){
	if(isEmpty()){
		printf("Stack is empty\n");
		return;
	}
	printf("%d\n",a[top]);
	top -= 1;
}
void push(int value){
	if(isFull()){
		printf("Stack is full\n");
		return;
	}
	top += 1;
	a[top]=value;
}
void display(){
	if(isEmpty()){
		printf("Stack is empty\n");
		return;
	}
	for(int i=top;i>=0;i--){
		printf("%d ",a[i]);
	}
}
int topelement(){
	if(isEmpty()){
		printf("Stack is empty\n");
		return 1;
	}
	return a[top];
}
int input(){
    int value;
    printf("Enter the value\n");
    scanf("%d",&value);
    return value;
}
int main()
{
    int ch,value;
	while(true){
	    printf("Enter the operation to be done\n");
	    printf("1-Push 2-Pop 3-Display 4-TopElement 5-Exit\n");
	    scanf("%d",&ch);
	    switch(ch){
	        case 1:
	        value=input();
	        push(value);
	        break;
	        case 2:
	        pop();
	        break;
	        case 3:
	        display();
	        break;
	        case 4:
	        topelement();
	        break;
	        default:
	        exit(0);
	    }
	}
}
