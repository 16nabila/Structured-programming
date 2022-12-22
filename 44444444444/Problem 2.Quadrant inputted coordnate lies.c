/*This is c program We know there are four  quadrants named 1st,2nd ,3rd and 4th quadrant .your task is to write a c program
program that can take input of the values of x & y coordinates lies
Author:Nabila Sarkar*/
#include<stdio.h>
int main()
{
    float x,y;
         printf("please enter the value of X coordinate point = ");
                scanf("%f",& x);
          printf("please enter the value of Y coordinate point = ");
                scanf("%f",& y);

        if(x>0 && y>0 ){
            printf("\nInputted coordinate(%.2f%,%.2f)lies is 1st Quadrant",x,y);

        }else if(x<0 && y>0 ){
            printf("\nInputted coordinate(%.2f%,%.2f)lies is 2nd Quadrant",x,y);

        } else if(x<0 && y<0 ){
            printf("\nInputted coordinate(%.2f%,%.2f)lies is 3rd Quadrant",x,y);

        } else if(x>0 && y<0 ){
            printf("\nInputted coordinate(%.2f%,%.2f)lies is 4th Quadrant",x,y);

        }else{
            printf("0");
    }
    return 0;
}
