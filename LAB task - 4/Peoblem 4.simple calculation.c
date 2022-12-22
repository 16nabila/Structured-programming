
/*This is c program Think about a simple calculator. You need to take two number as user input and then
provide various options to the user like sum, subtract, multiply, divide. Now let user
chose what to do. Based on the user’s choice do the calculation and display result.
Aothur:Nabila sarkar*/
#include<stdio.h>
int main()
{
    float frist,secound,sum,subtract,multiply,divides;
    int choice;
    printf("please print enter the frist number :");
        scanf("%f",& frist);
        printf("please print enter the secound number :");
        scanf("%f",& secound);
        printf("What do you want to do with the inputted numbers?");
        printf("\n1.Calculation the summeration\n2.Calculation the subtract\n3.Calculation the multiply\n4.Calculation the divides\nplease enter your choice:");
        scanf("%d",& choice);

    if(choice==1){
            sum=frist+secound;
        printf("the summation of %.2f and %.2f is = %.f2",sum,frist,secound);
    } else if(choice==2){
            subtract=frist-secound;
        printf("the subtract of %.2f and %.2f is = %.f2",subtract,frist,secound);
    }else if(choice==3){
            multiply=frist*secound;
        printf("the multiply of %.2f and %.2f is = %.f2",multiply,frist,secound);
    }else if(choice==4){
            divides=frist-secound;
        printf("the divition of %.2f and %.2f is = %.2",divides,frist,secound);
    }
    return 0;
}
