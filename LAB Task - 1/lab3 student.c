//this is c program for one student aggregate_marks and percentage mark//
#include<stdio.h>
int main()
{
    float sub_1,sub_2,sub_3,sub_4,sub_5,aggregate_marks,percentage_marks;
    printf(" enter your sub 1,number:");
    scanf("%f",&sub_1);

     printf("please enter your sub 2,number:");
    scanf("%f",&sub_2);

     printf("please enter your sub 3,number:");
    scanf("%f",&sub_3);

     printf("please enter your sub 4,number:");
    scanf("%f",&sub_4);

     printf("please enter your sub 5,number:");
    scanf("%f",&sub_5);

     printf("aggregate_marks:%f\n",aggregate_marks=sub_1+sub_2+sub_3+sub_4+sub_5);

     printf("percentage_marks:%f\n",percentage_marks=(aggregate_marks/500)*100);


    return 0;
}
