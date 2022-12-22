/* This is C program that can convert temperature from degree calcious to farenheit and farenheit to calcious.
Author: Nabila Sarkar*/
#include<stdio.h>
int main()
{
    float farenheit,calcious;
    int choice;
    printf("\n 1.calcious to farenheit \n 2.farenheit to calcious\nchoose one option:");
       scanf("%d",& choice);

        if(choice==1){
            printf("Enter the temperature in calcious: ");
            scanf("%f",calcious);
            farenheit=(calcious*9/5)+32;
            printf("%.2fcalcious is %.2f farenheit",calcious,farenheit);
        }
else if(choice==2){
            printf("Enter the temperature in farenheit: ");
            scanf("%f",farenheit);
            farenheit=(farenheit-32)*5/9;
            printf("%.2f farenheit is %.2f calcious",farenheit,calcious);
        }


    return 0;
}
