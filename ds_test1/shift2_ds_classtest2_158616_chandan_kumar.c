#include <stdio.h>
#include<stdlib.h>
//create two link list and short in descending order and mearge two link list in descending order
typedef struct node{
    int data;
    struct node* next;
}node;
node* start1;
node* last1;
node* start2;
node* last2;
node* start3;
node* last3;
//function for cteate node 
node* createNode(){
    node* new = malloc(sizeof(node));
    scanf("%d",&new->data);
    new->next = NULL;
    return new;
}
//function for create link list 1
void createList1(){
    int n;
    printf("Enter the no. want to create list 1 : ");
    scanf("%d",&n);
    //for first node
    node* new;
    printf("enter data for 1 node : ");
    new = createNode();
    start1=new;
    last1=new;
    //for add more node
    for(int i=1;i<n;i++){
        node* new;
        printf("enter data for %d node : ",i+1);
        new = createNode();
        last1->next = new;
        last1=new;
    }
}
//function for create link list 2
void createList2(){
    int n;
    printf("Enter the no. want to create list 1 : ");
    scanf("%d",&n);
    //for first node
    node* new;
    printf("enter data for 1 node : ");
    new = createNode();
    start2=new;
    last2=new;
    //for add more node
    for(int i=1;i<n;i++){
        node* new;
        printf("enter data for %d node : ",i+1);
        new = createNode();
        last2->next = new;
        last2=new;
    }
}
//function for make list 1 in desinding order 
void desinding(node* start){
    printf("sort in desinding order.\n");
    node* temp = start;
    node* ptr = temp->next;
    while(temp->next !=NULL){
        while(ptr->next != NULL){
            if(temp->data < ptr->data){
                temp->next = ptr->next;
                ptr->next= temp;
                ptr = ptr->next;
            }
            else{ptr = ptr->next;}
        }
        temp = temp->next;
        ptr = temp->next;
    }
}
void mearge(){
    node* t1 = start1;
    node* t2 = start2;
    while(t1->next !=NULL&&t2->next !=NULL){
        if(t1>t2 ){
            start3=t1;
            last1 = t2;
            last3= last2;
            
        }
        else{
            start3= t2;
            last2 = t1;
            last3= last1;
        }
    }
    
}

//function for display the link list data
void display_List(node* start){
    //traverse the linked list
    node* ptr;
    ptr = start;
    //int i=1;
    while(ptr != NULL){
        //printf("Node %d , data = %d \n",i,ptr->data);
        //i++;
        printf("-->%d",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main()
{
    createList1();
    display_List(start1);
    createList2();
    display_List(start2);
    desinding(start1);
    display_List(start1);
    desinding(start2);
    display_List(start2);
    mearge();
    display_List(start3);
    return 0;
}



