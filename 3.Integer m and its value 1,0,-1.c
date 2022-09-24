/* This c program reads the value of an integer m and display the value of m is 1 when m is larger then 0,0 when m is 0 and and  -1 when m is less than 0.
Author:Nabila sarkar*/
#include<stdio.h>
int main()
{
    int m;
    printf("please enter an integer n = ");
    scanf("%d",&m);
    if(m>0){
        printf("The value of %d is 1",m);//printf("n=1);//
    }else if(m==0){
        printf("The value of %d is 0",m);//printf("n=1);//
     } else {
        printf("The value of %d is -1",m);//printf("n=1);//
      }
    return 0;
}
