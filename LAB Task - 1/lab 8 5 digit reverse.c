/*This is c program for reversing any 5 digit number*/
#include<stdio.h>
int main()
{
    int a,b,c,d,e,num, reverse;
    printf("enter the five digit num:");
    scanf("%d",&num);
    e=num%10;
    d=(num/10)%10;
    c=(num/100)%10;
    b=(num/1000)%10;
    a=(num/10000);

    printf("the reversing num is :%d\n",reverse=e*10000+d*1000+c*100+b*10+a);
    return 0;
}
