#include <stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
    struct node* prev;
}node;
node* start = NULL;
node* last;
struct node* createNode(){
    node* new = malloc(sizeof(node));
    scanf("%d",&new->data);
    new->next=NULL;
    new->prev=NULL;
    return new;
}
void create_double_List(){
    int n;
    printf("Enter the no. want to create list : ");
    scanf("%d",&n);
    node* new;
    printf("enter data for 1 node : ");
    new = createNode();
    start=new;
    last = new;
    //for add more node
    for(int i=1;i<n;i++){
        node* new;
        printf("enter data for %d node : ",i+1);
        new = createNode();
        last->next = new;
        new->prev = last;
        last=new;
    }
}
void delete_start(){
    node* temp;
    temp = start;
    if(start->next == start){
        //for single node link list
        start = NULL;
        last = NULL;
        free(temp);
    }
    else {
        //for more node
        start = start->next;
        start->prev = NULL;
        free(temp);
    }
}
void delete_end(){
    node* temp;
    temp = last;
    if(start->next == start){
        //for single node link list
        start = NULL;
        free(temp);
    }
    else {
        //for more node
        last = last->prev;
        last->next =NULL;
        free(temp);
    }
}
void delete_Node(){
    int n;
    printf("Enter the node to delete : ");
    scanf("%d",&n);
    node* temp;
    temp = last;
    
    if(start == NULL){
        printf("Link list is empty\n");
    }
    if(n==1){
        delete_end();
    }
    else {
        for(int i =2;i<=n; i++){
            temp=temp->prev;
        }
        if(temp==start){
                delete_start();
            }
        else{
                temp->prev->next=temp->next;
                temp->next->prev=temp->prev;
                free(temp);
        }
    
    }
}
void display_List(){
    //traverse the linked list
    node* ptr;
    ptr = start;
    int i=1;
    if(start == NULL){
        printf("Link list is empty. ");
    }
    else{
        while(ptr != NULL){
            printf("--> %d",ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}
int main()
{
    create_double_List();
    display_List();
    delete_Node();
    display_List();
    return 0;
}

