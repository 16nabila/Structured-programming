#include<stdio.h>
int main(){
int num;
int remain;
int sum=0;

printf("Please enter a five digit number = ");
scanf("%d",&num);

remain=num%10;
sum=sum+remain;
num=num/10;

remain=num%10;
sum=sum+remain;
num=num/10;

remain=num%10;
sum=sum+remain;
num=num/10;

remain=num%10;
sum=sum+remain;
num=num/10;

remain=num%10;
sum=sum+remain;
num=num/10;

printf("The sum of five digit number is = %d",sum);
return 100;

}
