#include <stdio.h>

int main()
{
    int n,bp,fine;
    printf("Enter the no. of days : ");
    scanf("%d", &n);
    printf("Enter the book price : ");
    scanf("%d",&bp);
    if(n<=5){
        fine = n*5;
    }
    if(n>5 && n<=10){
        fine = 5*5 + (n- 5)*10;
    }
    if(n>10&& n<=30){
        fine = 5 *5 + 5*10 +(n- 10)*20;
    }
    if(n >30){
        fine = 5 *5 + 5*10 +(n- 10)*20;
        if( fine < bp){
            fine = bp;
        }
            
    }
    
    printf("\nfine : %d",fine);
    

    return 0;
}


