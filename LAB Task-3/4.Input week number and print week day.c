/* This c program to input week number and print week day
Author:Nabila sarkar*/
#include<stdio.h>
int main()
{
    int week;
    printf("please enter the week number = ");
    scanf("%d",&week);
    if(week>=1 &&week<=52){
        printf("Saturday\n Sunday\n Monday\n Tuesday\n Wednusday\n Thrusday\n Friday");
    }else{
    printf("Invalide");
    }
    return 0;
}
