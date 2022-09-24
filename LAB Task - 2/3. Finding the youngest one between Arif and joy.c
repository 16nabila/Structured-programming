/* This is c program determine the youngest one between Arif and joy
Author:nabila*/
#include<stdio.h>
int main()
{
    int arif_age,joy_age;
    printf("please enter arif's age =");
    scanf("%d",& arif_age);

printf("please enter joy's age =");
    scanf("%d",& joy_age);

     if(arif_age>joy_age){
        printf("Arif is the youngest = %d\n",arif_age);
     }else{
     printf("Joy is the youngest = %d",joy_age);}

    return 0;
}
