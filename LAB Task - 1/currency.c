/*this is c program total currency notes of each denomination the cashier will have to the with drawer*/
#include<stdio.h>
int main()
{
    int amount,hun_tk,fif_tk,ten_tk;
    printf("enter the amount=");
    scanf("%d",&amount);

    hun_tk=amount/100;
    amount=amount%100;
    fif_tk=amount/50;
    amount=amount%50;
    ten_tk=amount/10;


    printf("100 tk note %d",hun_tk);
    printf("\n50 tk note %d",fif_tk);
    printf("\n10 tk note %d",ten_tk);


    return 0;
}
