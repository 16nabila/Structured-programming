/* This is c program can check whether a triangle is valid or not
Author:Nabila Sarkar*/
#include<stdio.h>
int main()
{
    float angle_1,angle_2,angle_3;
        printf("First angle of area c = ");
        scanf("%f",& angle_1);

         printf("First angle of area b = ");
        scanf("%f",& angle_2);

         printf("First angle of area a = ");
        scanf("%f",& angle_3);

        if(angle_1+angle_1+angle_1==180){
            printf("The triangle is valid");
        }else{
        printf("The triangle is not valid");
        }
    return 0;
}
