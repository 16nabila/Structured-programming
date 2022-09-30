/* This progrum assigns a value to double variable cost depending on the value of integer variable
distance as follows:
Author:Nabila Sarkar*/
#include<stdio.h>
int main()
{
    int distance;
    double cost;
    printf("please enter the distence = ");
    scanf("%d",&distance);

    if(distance>=0 && distance<=100){
        printf("cost = %.2lf",cost=5);
    }else if(distance>100 && distance<=500){
        printf("cost = %.2lf",cost=8);
    } else if(distance>500 && distance<1000){
        printf("cost = %.2lf",cost=10);
    }else if(distance>=1000){
        printf("cost = %.2lf",cost=12);
    }else{
        printf("Invalid!!");
    }
    return 0;
}

