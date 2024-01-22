/*inplement the queue using stack 
name- chandan kumar
Gid - 158616
*/
#include <stdio.h>
#include <stdlib.h>
 
int s1[100], s2[100];
int top1 = -1;
int top2 = -1;
int count = 0;
void push1(int data){
        s1[++top1] = data;
    }
int pop1(){
        return(s1[top1--]);
    }
void push2(int data){
        s2[++top2] = data;
    }
int pop2(){
    return(s2[top2--]);
}

void enqueue(){
    int data, i;
    scanf("%d", &data);
    push1(data);
    count++;
}

int dequeue(){
    int i,x;
 
    for (i = 0;i <= count;i++){
        push2(pop1());
    }
    x = pop2();
    count--;
    for (i = 0;i <= count;i++){
        push1(pop2());
    }
    return x;
}

void display(){
    int i;
 
    for (i = 0;i <= top1;i++){
        printf(" %d ", s1[i]);
    }
}
void main(){
    int n,data;
    scanf("%d",&n);
    for(int i = 0;i<=n;i++){
        scanf("%d",&data);
    	if(data == 1){
            enqueue();
            i++;
    	}
    	if(data == 2){
    	    int x = dequeue();
    	   // printf("%d\n",s1[x]);
    	}
    }
    display();
}

