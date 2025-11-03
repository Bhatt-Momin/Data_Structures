#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int front;
    int rear;
    int *arr;
};
int isFull(struct queue *q){
    if(q->rear==q->size-1){
        return 1;
    }else{
        return 0;
    }

}
int isEmpty(struct queue *q){
    if(q->rear==q->front){
        return 1;
    }else{
        return 0;
    }

}
void Enqueue(struct queue *q,int val){
    if(isFull(q)){
        printf("Queue is full");
    }else{
        q->rear++; //q->rear = q->rear+1
        q->arr[q->rear]=val;
        printf("Enqueued element : %d\n",val);
    }
}
int Dequeue(struct queue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("Queue is Empty");
    }else{
        q->front++;
        a = q->arr[q->front];
    }
    return a;
}

int main(){
    struct queue q;
    q.size = 10;
    q.front=q.rear=-1;
    q.arr = (int*)malloc(q.size*sizeof(int));

    if (isEmpty(&q)){
        printf("Queue is empty\n");
    }

    //enqueue some elements
    Enqueue(&q,90);
    Enqueue(&q,78);
    Enqueue(&q,56);


    if (isEmpty(&q)){
        printf("Queue is empty\n");
    }else{
        printf("after enqueing Queue is not empty\n");
    }

    printf("dequeuing element %d: ",Dequeue(&q));
    printf("\ndequeuing element %d: ",Dequeue(&q));
    printf("\ndequeuing element %d: ",Dequeue(&q));
    if (isEmpty(&q)){
        printf("\nQueue is empty\n");
    }else{
        printf("Queue is not empty\n");
    }

}