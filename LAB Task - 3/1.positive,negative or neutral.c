/*This is c program that can take input a number and then decide whether the number is positive ,negative or neutral
Author:Nabila sarkar*/
#include<stdio.h>
int main()
{
    int num;
    printf("enter a number =");
    scanf("%d",& num);
    if(num>0){
        printf("number is positive");
    }else if(num<0)
    printf("number is negative");
    else{
        printf("number is neutral");
    }
    return 0;
}
