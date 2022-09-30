/* This is c program In a town, the percentage of men is 52. The percentage of total literacy is 48. If total percentage
of literate men is 35 of the total population, write a program to find the total number of illiterate
men and women if the population of the town is 80,000.
author:Nabila sarkar*/
#include<stdio.h>
int main()
{
    float population,men,women,men_and_women_literacy,men_literacy,men_illiteracy,women_literacy,total_literacy,women_illiteracy;
    printf("enter the population = ");
    scanf("%f",&population);

   men=(population*52)/100;
   women=population-men;
   men_and_women_literacy=population-men;
   men_literacy=(men*35)/100;
   men_illiteracy=men-men_literacy;
   women_literacy=men_and_women_literacy-men_literacy;
   total_literacy=population-men_and_women_literacy;
   women_illiteracy= total_literacy-men_literacy;

   printf("Number of illiterate men = %f\n",men_literacy);
   printf("Number of illiterate women =%f\n",women_illiteracy);
    return 0;
}
