/* This program takes basic salary of an employee and calculate its Gross salary according to following:
     basic salary<=10000 : HRA = 20% ,DA =80%
     basic salary<=20000 : HRA = 25% ,DA =90%
     basic salary>20000 : HRA = 30% ,DA =95%
     Author= Nabila sarkar*/
     #include<stdio.h>
     int main()
     {
         float basic_salary;
         printf("please enter your basic salary =\n");
         scanf("%f",&basic_salary);
         if(basic_salary<=10000){
            printf("your gross salary is =.2%f",basic_salary+0.2*basic_salary+0.8*basic_salary);
         }else if(basic_salary<=20000){
            printf("your gross salary is =.2%f",basic_salary+0.25*basic_salary+0.9*basic_salary);
         }else{
            printf("your gross salary is =.2%f",basic_salary+0.3*basic_salary+0.95*basic_salary);
         }

         return 0;
     }
