/*This is c program can Check if the area of triangle is greater than the perimeter of the triangle
  Author:Nabila Sarkar*/
  #include<stdio.h>
  int main()
  {
      float base, height,side_1,side_2,side_3;

      printf("please enter base of the triangle =");
      scanf("%f",&base);

       printf("please enter height of the triangle =");
      scanf("%f",&height);
      printf("please enter the first side of the triangle =");
      scanf("%f",&side_1);
       printf("please enter the second side of the triangle =");
      scanf("%f",&side_2);
      printf("please enter the third side of the triangle =");
      scanf("%f",&side_3);

      if((0.5*base*height)>(base+side_1+side_2+side_3)){
        printf("The area of triangle is greater than the perimeter of the triangle");
      }else{
          printf("The area of triangle is not greater than the perimeter of the triangle");}
      return 0;

  }
