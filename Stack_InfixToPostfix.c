#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack{
    int size;
    int top;
    char *arr;
};
int precedence(char ch){
    if(ch=='*'|| ch== '/'){
        return 3;
    }else if (ch=='+'|| ch== '-'){
        return 2;
    }else{
        return 0;
    }
}
int is_operator(char ch){
    if(ch == '*'|| ch== '/'||ch=='+'|| ch=='-'){
        return 1;
    }else{
        return 0;
    }
}
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
void push(struct stack *ptr,int value){
    if(is_full(ptr)){
        printf("stack overflow\n");
    }else{
        ptr->top++; //update top by 1
        ptr->arr[ptr->top]=value; //insertion of value into top (which is already increased)

    }

}
int pop(struct stack *ptr){
    if(is_empty(ptr)){
        printf("Stack underflow");
        return -1;
    }else{
        int value = ptr->arr[ptr->top]; //puts last element  in value variable
        ptr->top--; //so now last element removed
        return value;
    }
}
int stackTop(struct stack * ptr){
    return ptr->arr[ptr->top];
}
char * Infix_To_Postfix(char* Infix){
    struct stack *sp = (struct stack*)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top=-1;
    sp->arr = (char *)malloc(sp->size*sizeof(char));
    char * Postfix = (char *)malloc((strlen(Infix+1))*sizeof(char));
    int i =0;//track infix traversal
    int j=0;//track postfix traversal
    while(Infix[i]!='\0'){
        if(!is_operator(Infix[i])){
            Postfix[j]=Infix[i];
            j++;
            i++;
        }else if(precedence(Infix[i])>precedence(stackTop(sp))){
            push(sp,Infix[i]);
            i++;
        }else{
            Postfix[j]=pop(sp);
            j++;
        }
    }
    while(!is_empty(sp)){
        Postfix[j]=pop(sp);
        j++;
    }
    Postfix[j]='\0';
    return Postfix;


}
int main(){
    char *Infix = "a-b+t/6";
    printf("Postfix is %s",Infix_To_Postfix(Infix));

}