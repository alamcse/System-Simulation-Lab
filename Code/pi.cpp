#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include<conio.h>

void main()
{
   int iteration=0;
   double x,y;
   int i,count=0;
   double z;
   double pi;

   printf("\n####Determination of value of PI by Monte Carlo Method####\n\n");
   printf("Enter the number of iterations used to estimate pi: ");
   scanf("%d",&iteration);

   for ( i=0; i<iteration; i++)
    {
      x = (double)rand()/RAND_MAX;
      y = (double)rand()/RAND_MAX;
      z = x*x+y*y;
      if (z<=1)
	 count++;
    }

   pi=(double)count/iteration*4;
   printf("\nNumber of trials= %d \n\nEstimation of pi is: %g \n",iteration,pi);
   getch();
}



