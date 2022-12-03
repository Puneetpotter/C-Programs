#include <stdio.h>
int main() 
{
   float b,h,area;
  
   printf("Enter the base length\n");
   scanf("%f",&b);

   printf("Enter the length of height\n");
   scanf("%f",&h);

   area=b*h/2;

   printf("The area of the given triangle is= \n%f",area);

      return 0;
}