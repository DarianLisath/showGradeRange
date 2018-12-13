#include <stdio.h>
#include <stdlib.h>
#include "grade.h"

int main()
{
    printf("Enter your score!");

    float score;
    scanf("%f", &score);

    showLetterGrade(score);

    return 0;
}


    void showLetterGrade(float score)
{
   switch(score) {
      case 'A' :
         printf("100-94.0\n" );
         break;
      case 'B' :
         printf("93.9-80.0\n" );

      case 'C' :
         printf("79.9-70.0\n");
         break;
      case 'D' :
         printf("69.9-60.0\n" );
         break;
      case 'F' :
         printf("59.9-0\n" );
         break;
      default :
         printf("Invalid grade\n" );
   }

   //printf("Your grade is  %c\n", grade );

   return 0;
}
