//this is c program to find the cost price of one product//
#include<stdio.h>
int main()
{
    float selling_price,profit_earned,one_product;
    printf("enter the total sell price=");
scanf("%f",&selling_price);
printf("enter the total profit=");
scanf("%f",&profit_earned);

    one_product=(selling_price - profit_earned)/15;
    printf("one_product_price = %.2f",one_product);

    return 0;
}
