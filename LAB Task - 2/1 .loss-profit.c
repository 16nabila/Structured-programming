/* This is c program that determines*loss pr profit*/
#include<stdio.h>
int main()
{
    float sell_p=0,cost_p=0;
    printf("enter the sell_price =");
    scanf("%f", &sell_p);

    printf("please enter the cost_price of the item =");
    scanf("%f", &cost_p);

    if(sell_p>cost_p){

            printf("profit %.2f\n",(sell_p-cost_p));
        } else{

            printf("loss %.2f",cost_p);
        }


    return 0 ;
}



