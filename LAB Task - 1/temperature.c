//this is c program convert this temperature into centigrade degrees//
#include<stdio.h>
int main()
{
    float citytemperature_F;
    float centigrade;

    printf("enter your city temperature in fehrenheit");
    scanf("%f",&citytemperature_F);
    printf("temperature in centigrade is:%f",centigrade=(citytemperature_F-32)/9*5);
    return 0;
}
