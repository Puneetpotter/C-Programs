#include<stdio.h>

int main(void)
{
 float weight , height , bmi ;
    
printf("Enter the weight in kilograms :\n");
 scanf(" %f", &weight);

printf("Enter the height of a person in metres :\n");
 scanf(" %f", &height);

bmi= weight / (height * height);

printf("bmi :  %f ", bmi);

return 0;
}