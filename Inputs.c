#include <stdio.h>
int main() 
{
   int a;
   float b;
   char word;
 
   printf("Enter a character: ");
        scanf("%c",&word);     
           printf("You entered %c.", word); 

   printf("\nEnter an integer : ");
        scanf("%d",&a);
            printf("Integer : %d",a);

   printf("\nEnter any floating point no. : ");
        scanf("%f",&b);
           printf("Float : %f",b);
      return 0;
}