/* This is c progrem A cashier has currency notes of denominations 10, 50 and 100. If the amount to be withdrawn is
input through the keyboard in hundreds, find the total number of currency notes of each
denomination the cashier will have to give to the with-drawer.
author:Nabila sarkar*/
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
