#include<stdlib.h>
#include<stdio.h>
#define size 1

struct Queue{
     int items[size];
     int front,rear;
};
void createQueue(struct Queue*q){
     q->front=-1;
     q->rear=-1;
}
int isEmpty(struct Queue*q){
     return q->rear==-1;
}
int isFull(struct Queue*q){
    return q->rear==size-1;
}
void enqueue(struct Queue*q,int ele){
     if(isFull(q)){
        printf("Queue is full");
        return;
     }
     q->rear++;
     q->items[q->rear]=ele;
     if(q->front==-1) q->front=0;
}
void dequeue(struct Queue*q){
    if(isEmpty(q)){
        printf("Queue is Empty");
        return;
    }
    q->front++;
    if(q->front == q->rear){
        q->front =-1;
        q->rear= -1;
    }
}
void display(struct Queue*q){
    if(isEmpty(q)){
        printf("Queue is empty");
        return;
    }
    for(int i=q->front;i<=q->rear;i++){
        printf("%d\t",q->items[i]);
    }
    printf("\n");
}
int main(){
    struct Queue*q=(struct Queue*)malloc(sizeof(struct Queue));
    createQueue(q);
    enqueue(q,1);
    enqueue(q,2);
    enqueue(q,3);
    display(q);
    free(q);
    return 0;
}