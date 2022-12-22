
/*This is c program to display a menu in a restaurant and user choice*/
#include<stdio.h>
int main()
{
    int choice;
    printf("Food menu:\n1.rice \n2.Fish \n3.Chicken \n4.vegetable \n please enter your choice:");
    scanf("%d",& choice);
    if(choice==1){
        printf("your food menu is rice");
    }else if(choice==2){
        printf("your food menu is fish");
    } elsa if(choice==3){
        printf("your food menu is chicken");
    } else if(choice==4){
        printf("your food menu is vegetable");
    }else{
    printf("not available");
    }
    return 0;
}
