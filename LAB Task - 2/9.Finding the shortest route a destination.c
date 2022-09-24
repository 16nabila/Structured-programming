/* If someone wanta to go the shopping complex from his home and there are two alternative routes to there.
One route is A and another routes is B . In A route distance from his home to the sopping complex is 15.6 kilometers
and in B route the distance is 18 kilometers .Now considering this situation,
this program can determine the shortest route to the destination */
#include<stdio.h>
int main()
{
    float a,b;
    printf("please enter the distance of the first route (A) =");
    scanf("%f",&a);
    printf("please enter the distance of the first route (A) =");
    scanf("%f",&b);


    if(a<b){
        printf("A is the shortest route to the destination");
    }else{
    printf("B is the shortest route to the destination");
    }
    return 0;
}
