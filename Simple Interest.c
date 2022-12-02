/* C program to calculate Simple Interest*/
#include <stdio.h>

int main()
{

float si,r,p,t;

printf("Enter the principal value=\n");
scanf("%f",&p);

printf("Enter the time=\n");
scanf("%f",&t);

printf("What is the rate?=\n");
scanf("%f",&r);

si=p*r*t/100;

printf("The simple interest is = %f",si);
return 0;

}