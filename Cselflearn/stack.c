#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
typedef struct node stacknode;
typedef stacknode *linked_stack; //linked_stack 是stacknode型態的指標型態
linked_stack top = NULL;

int isempty();
void push(int);
int pop();

int main (){
    int value;
    int i , n;
    printf("Enter a size of a stack :");
    scanf("%d",&n);
    for(i = 0 ; i < n ; i++){
        scanf("%d",&value);
        push(value);
    }
    printf("==================================\n");

    while(!isempty()){
        printf("The order of the datas is:%d\n",pop());
    }
    pop();
}

int isempty(){ //檢測是否為empty stack
    if(top == NULL){
        return 1;
    }else{
        return 0 ;
    }
}
void push(int data){ //將資料存入stack
    linked_stack new_add_node = (linked_stack)malloc(sizeof(stacknode));
    new_add_node->data = data; //將輸入的資料存入新節點
    new_add_node->next = top;  //將新節點指向top
    top = new_add_node;        //新節點成為top
}
int pop(){  //把資料從stack拿出來
    linked_stack ptr;
    int temp;
    if(isempty()){
        printf("Stack is empty.\n");
        return -1;
    }else{
        ptr = top ;
        temp = ptr->data;
        top = top->next;    //top 指向下一個節點)向下
        free(ptr);
        return temp ;
    }
}
