
/*If s five digit number is input through the keyboard,
    write a program to calculate the sum of its digit.*/
    #include<stdio.h>
    int main()
    {
        int a,b,c,d,e,sum;
        printf( "enter digit number:");
        scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e") ;
        sum=a+b+c+d+e;
        printf( "the sum is %d\n",sum);

             return 0;
    }
