//Queue    NULL<-Last<-.........<-First
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
typedef struct Node queue_node;
queue_node *First = NULL;
queue_node *Last = NULL;
int size = 0;

void Enqueue(int a);
int Dequeue();
int getFirst();
int getLast();
int getSize();
int isEmpty();


int main() {

	for(int i =0; i<8;i++){
		Enqueue(rand()%16);
	}
  
	if(isEmpty()){
		printf("佇列前端(第一筆)資料為:NULL\n");
		printf("佇列尾端(最後一筆)資料為:NULL\n");
	}else{
		printf("佇列前端(第一筆)資料為:%d\n",getFirst());
		printf("佇列尾端(最後一筆)資料為:%d\n",getLast());
	}
	printf("佇列的總數為:%d\n\n",getSize());
  
	while( !isEmpty() ){
		printf("佇列移除的資料為:%d\n", Dequeue());
	}
	Dequeue();
	return 0;
}

void Enqueue(int a){
    queue_node *new = (queue_node*)(malloc(sizeof(queue_node)));
    new->data = a;
    new->next = NULL;

    if(isEmpty()){
        First = new;
    }else{
        Last->next = new;
    }

    Last = new;
    size++;
}

int Dequeue(){
    if(isEmpty()){
        printf("此佇列為空\n");
    }else{
        queue_node *ptr = First;
        int temp = First->data;
        First = First->next;
        free(ptr);
        size--;
        return temp;
    }
}

int getFirst(){
    if(!isEmpty())return First->data;
}

int getLast(){
    if(!isEmpty())return Last->data;
}

int getSize(){
    return size;
}

int isEmpty(){
    if(size == 0){
        First = NULL;
        Last = NULL;
        return 1;
    }else return 0;
}
