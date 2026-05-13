#include <stdio.h>
#include <stdlib.h>
struct node{
    struct node* next;
    int data;
};

int main(){
    struct node* head = malloc(sizeof(struct node*));
    struct node* sec = malloc(sizeof(struct node*));
    struct node* third = malloc(sizeof(struct node*));

    head->next=sec;
    head->data=0;
    
    sec->next=third;
    sec->data=10;

    third->next=NULL;
    third->data=20;
}