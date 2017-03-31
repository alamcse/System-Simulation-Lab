#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
 main()
{
int k,j,x,nn;
float lemda,cumprob,fact,prob,y,mean;
 /*lemda=5.0;*/
printf("\n value of mean (lemda)=");
scanf("%f",&lemda);
printf("\n number of variates to be generated=");
scanf("%d",&nn);
mean=lemda;
for(j=1;j<=nn;++j)
{
fact=1.;x=0;
cumprob=0.0;
y=rand()/32768.0;
while(y>cumprob)
{
prob=pow(2.718282,-mean)*pow(mean,x)/fact;
cumprob=cumprob+prob;
x=x+1;
fact=fact*x;
//printf("/n %4.3f %4.2f %4.2f %4.2f",y,prob,cumprob,fact);
}
printf("%4d",x);
}
getch();
return 0;
}

