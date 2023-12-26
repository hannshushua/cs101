#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

struct node{
    int data ;
    struct node *next; 
};
typedef struct node node;

void addfront(node **head , node **back , int num){
    node *new = (node*)malloc(sizeof(node)); //宣告新的點要給他記憶體大小
    new->data = num;
    new->next = (*head)->next;
    (*head)->next = new ;
    if(new->next == NULL)*back=new; //維護
}

void addback(node **head , node **back , int num){
    node *new = (node*)malloc(sizeof(node));
    new->data = num;
    new->next = NULL;
    (*back)->next = new;
    *back=new;
}

void printlist(node **head){

    node *temp = *head; // *(**head) = *head = &head
    while(temp->next != NULL){
        temp = temp->next;
        printf("%d ",temp->data);
    }
}

void deletefront (node **head, node **back){

    if((*head)->next == NULL)return;

    node *temp = (*head)->next;
    (*head)->next = (*head)->next->next;
    free(temp);
    if((*head)->next == NULL)*back=*head;
}

void deleteback (node ** head, node **back){
    if((*head)->next == NULL)return;
    
    node *temp = (*head);
    while(temp->next != (*back)){
        temp = temp->next;        
    }
    
    node *temp2 = (*back);
    
    temp -> next = NULL;
    (*back)= temp;
    free(temp2);
}
int main (){
    
    node* head = (node*)malloc(sizeof(node));
    head->next = NULL;
    node* back = head;

    addfront(&head,&back,1);
    addfront(&head,&back,2);
    addfront(&head,&back,3);
    addfront(&head,&back,4);
    deleteback(&head,&back);
    printlist(&head);

}
