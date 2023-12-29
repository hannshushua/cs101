#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

struct node {
    int data ;
    struct node* next;
};
typedef struct node node;

void printlist(node **head, node **back){
    node *temp = *head;
    while(temp->next != NULL){
        temp = temp->next;
        printf("%d ", temp->data);
    }
    printf("\n");
}

void addfront (node **head , node **back , int num){
    node *new = (node*)malloc(sizeof(node));
    new->data = num;
    new->next = (*head)->next;
    (*head)->next = new;
    if(new->next == NULL)(*back) = new;
}

void addback (node **head, node **back , int num){
    node *new = (node*)malloc(sizeof(node));
    new->data = num;
    new->next = NULL;
    (*back)->next = new;
    (*back)=new;
}

void deletefront(node **head, node **back){

    if((*head)->next == NULL)return;

    node *temp = (*head)->next;
    (*head)->next = (*head)->next->next;
    free(temp);
    if((*head)->next == NULL)(*back)=(*head);
}

void deleteback(node **head, node **back){
    if((*head)->next == NULL)return;

    node *temp = (*head);
    //找back的前一個
    while(temp->next != (*back)){
        temp = temp->next ;
    }
    
    node *temp2 = (*back);

    temp->next = NULL;
    (*back) = temp ;
    free(temp2);
}

void swap (node **head, node **back){
    node *cur = (*head)->next;
    node *pre = NULL;
    node *temp = NULL;

    while(cur != NULL){
        temp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = temp;
    }
    (*head)->next = pre; //(*head)->next = (1) = pre 

}

void findnum (node **head, node **back , int num){
    node *temp = (*head)->next;

    int i = 1;
    bool x = true;
    while(temp != NULL){
        if(temp->data == num){
            printf("%d is at the %d position of the list. \n",num ,i);
            x = 0;
        }
        temp = temp->next;
        i++;
    }
    if(x){
        printf("%d isn't in this list !\n", num);
    }
    
}

void findposition(node **head, node **back, int num){
    node *temp = (*head)->next;
    int i = 1;
    bool x = true;
    while(temp != NULL){
        if(temp->data == num){
            printf("The number %d in this list is %d.\n", i, temp->data);
            x = 0;
        }
        temp = temp->next;
        i++;
    }
    if(x){
        printf("%d isn't in this list !\n", num);
    }
}
int main (){
    //初始化
    node* head = (node*)malloc(sizeof(node));
    head->next = NULL;
    node* back = head;

    addback(&head,&back,4);
    addback(&head,&back,3);
    addback(&head,&back,1);
    addback(&head,&back,2);
    
    // printlist(&head,&back);

    findposition(&head,&back,3);
    system("pause");
    return 0 ;
}
