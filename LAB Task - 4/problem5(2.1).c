/* Take an integer variable named currentNumber. If integer variable
currentNumber is odd, change its value so that it is now 3 times currentNumber
plus 1, otherwise change its value so that it is now half of currentNumber
(rounded down when currentNumber is odd).
Author :Nabila sarkar*/
#include<stdio.h>
int main()
{
    int currentNumber;
    printf("Enter the number = ");
    scanf("%d",& currentNumber);

    if((currentNumber%2)!=0){
        printf("the value of the number =%d",(currentNumber*3)+1);
    }else{
    printf("The value is %d",currentNumber/2);
    }

    return 0;
}
