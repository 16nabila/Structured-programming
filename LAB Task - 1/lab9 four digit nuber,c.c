//This is c program for calculating the sum of first and last digit of any four digit number//
#include<stdio.h>
int main()
{
    int a,e,num;
    printf("enter the five digit num:");
    scanf("%d",&num);
    e=num%10;
    a=(num/10000);

    printf("the sum of first and last digit of the number is :%d\n",e+a);
    return 0;
}

