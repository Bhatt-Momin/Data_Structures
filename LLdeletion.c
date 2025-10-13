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
//deleting first element

struct node *delete_at_first(struct node *head){
    struct node *ptr = head;
    head = head->next;
    free(ptr); // to free the memory after deleting node
    return head;
}

//deleting element at a given index
struct node *delete_at_index(struct node *head,int index){
    struct node *ptr = head;
    struct node *ptr2 = head->next;
    int i =0;
    while(i<index-1){ //doesnt work  on 0th  index element
        ptr= ptr->next;
        ptr2= ptr2->next;
        i++;
    }
    ptr->next=ptr2->next;
    free(ptr2);
    return head;
    

}
//delete at last
struct node *delete_at_last(struct node *head){
    struct node *ptr = head;
    struct node *ptr2 = head->next;
    while(ptr2->next != NULL){
        ptr = ptr->next;
        ptr2=ptr2->next;
    }
    ptr->next = NULL;
    free(ptr2);
    return head;
}

//deleting at a given value
struct node *delete_at_value(struct node *head,int value){
    struct node *ptr = head;
    struct node *ptr2 = head->next;
    while(ptr2->data != value && ptr2->next != NULL){
        ptr= ptr->next;
        ptr2= ptr2->next;
    }
    if(ptr2->data == value){ //otherwise the above while loop ended bcz of NULL condition,//doesnt work  on 0th  index element
        ptr->next=ptr2->next;
        free(ptr2);

    }
    return head;
    

}

int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));
    fifth = (struct node*)malloc(sizeof(struct node));
    head->data =4;
    head->next = second;
    second->data =3;
    second->next = third;
    third->data =8;
    third->next = fourth;
    fourth->data=89;
    fourth->next =fifth;
    fifth->data=901;
    fifth->next =NULL;


    linkedlist_traversal(head);

    head= delete_at_first(head);
    printf("\n LL after deleting first element\n");
    linkedlist_traversal(head);


    head = delete_at_index(head,1);
    printf("\n LL after deleting element at given index\n");
    linkedlist_traversal(head);

    head = delete_at_last(head);
    printf("\n LL after deleting last element\n");
    linkedlist_traversal(head);



    printf("\n LL after deleting node of given value\n");
    head = delete_at_value(head,89);
    linkedlist_traversal(head);


    return 0;
}
