#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};


void linkedlist_traversal(struct node *ptr){
    while(ptr!=NULL){
        printf("Element: %d\n",ptr->data);
        ptr = ptr->next;
    
    }
}

//insert at beggining
struct node *insert_at_first(struct node *head,int data){
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data= data;
    return ptr;

}

//insert anywhere
struct node *insert_at_index(struct node *head,int data,int index){
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *temp = head;
    int i =0;
    while(i<index){
        temp = temp->next;
        i++;
    }
    ptr->data = data;
    ptr->next = temp->next;
    temp->next = ptr;

    return head;
    
}

//insert at end 
struct node *insert_at_end(struct node *head,int data){
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *temp = head;
    while(temp->next!=NULL){
        temp=temp->next;

    }
    ptr ->data =data;
    temp->next=ptr;
    ptr->next=NULL;

    return head;
}

struct node *insert_after_node(struct node *head,struct node* prevNode,int data){
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next=ptr;


    return head;
}



int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;

    printf("Traversal\n");

    linkedlist_traversal(head);

    head = insert_at_first(head,12);
    printf("Insert at First\n");
    linkedlist_traversal(head);

    head = insert_at_index(head,78,2); //original waale ki index 
    printf("Insert at given index\n");
    linkedlist_traversal(head);

    head = insert_at_end(head,67);
    printf("insert at end\n");
    linkedlist_traversal(head);


    head =insert_after_node(head,second,100);
    printf("insert after given node\n");
    linkedlist_traversal(head);



    return 0;
}
