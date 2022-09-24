/* This program determines whether a number is negative or not
Author:Nabila sarkar*/
#include<stdio.h>
int main()
{
    float num;
    printf("please enter the number =");
    scanf("%f",&num);

    if(num<0){
        printf("This number is negative");
    }else{
    printf("This number is not negative");
    }
    return 0;
}

