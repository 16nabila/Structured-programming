/*This is c program for calculating Niloy's basic salary*/
#include<stdio.h>
int main()
{
    float basic_salary,dearness_allowance,house_rent,gross_salary;
    printf("please enter your basic salary");
    scanf("%f",&basic_salary);
    dearness_allowance=(40*basic_salary)/100;
    house_rent=(20*basic_salary)/100;
    gross_salary=basic_salary+house_rent+dearness_allowance;
    printf("your gross_salary is :%.2f taka",gross_salary);

    return 0;
}
