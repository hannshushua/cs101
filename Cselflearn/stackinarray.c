#include <stdio.h>
#include <stdlib.h>
#define maxsize 100

int stack[maxsize];
int top = -1;
int isempty();
void push(int);
int pop();

int main(){
    int value, i;
    printf("Please enter 10 data :\n");
    for(i = 0 ; i < 10 ; i++){
        scanf("%d",&value);
        push(value);
    }
    printf("==========================\n");

    while(!isempty()){
        printf("%d\n", pop());
    }
    pop();
    system("pause");
    return 0 ;
}

int isempty(){

    if(top == -1){
        return 1;
    }else{
        return 0;
    }
}

void push(int data){
    if(top>=maxsize){
        printf("This stack is full .\n");
    }else{
        top++;
        stack[top] = data;
    }
}

int pop(){
    int data;
    if(isempty()){
        printf("This stack is empty.\n");
    }else{
        data = stack[top];
        top--;
        return data;
    }
}
