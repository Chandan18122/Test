#include <stdio.h>

int main()
{
    float s, saving, tax, gs;
    printf("Enter gross income : ");
    scanf("%f", &gs);
    printf("Enter saving: ");
    scanf("%f",&s);
    if(s >100000){
        saving = gs - 100000;
    }
    else{
        saving = gs - s;
    }
    printf("Taxable income : %.2f",saving);
    if(saving <100000){
        tax = 0;
    }
    if(saving >100000 && saving <= 200000){
        tax = 0*100000 +(saving - 100000) * .1;
    }
    if(saving >200000 && saving <= 500000)
    {
        tax = 0*100000 + 100000 * .1 +(saving- 200000)* .2;
    }
    if(saving >500000)
    {
        tax = 0*100000 + 100000 * .1 + 300000* .2 +(saving- 500000)* .3;
    }
    printf("\ntax : %.2f",tax);
    return 0;
}


