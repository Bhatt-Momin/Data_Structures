#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};

int is_empty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }else{
        return 0;
    }

}

int is_full(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }else{
        return 0;
    }

}


int main(){
   /* struct stack s;
    s.top = -1;
    s.size = 80;
    s.arr = (int *)malloc(s.size*sizeof(int));*/
    struct stack *s;
    s->top = -1;
    s->size = 5;
    s->arr = (int *)malloc(s->size*sizeof(int));


    //pushing element manually

    s->arr[0]=44;
    s->top++;
    s->arr[1]=78;
    s->top++;
    s->arr[2]=9;
    s->top++;
    s->arr[3]=8;
    s->top++;
    s->arr[4]=80;
    s->top++;


    if(is_empty(s)){
        printf("Stack is empty");
    }else if(is_full(s)){
        printf("Stack is full");
    }else{
        printf("Stack is partial");
    }

    return 0;


}