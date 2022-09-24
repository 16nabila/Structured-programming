/* This program determines whether a number is positive or not
Author:Nabila sarkar*/
#include<stdio.h>
int main()
{
    float num;
    printf("please enter the number =");
    scanf("%f",&num);

    if(num>0){
        printf("This number is positive");
    }else{
    printf("This number is not positive");
    }
    return 0;
}
