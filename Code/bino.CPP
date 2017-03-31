#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
main()
{
int n,i,x,k,m,nn,nt;
float y,p;
printf("\n The parameter n (number of trials) nt=");
scanf("%d",&nt);
printf("\n Enter the value of p(<1.0) the probability of succss=");
scanf("%f",&p);
printf("\n Number the value of variates to be generated (n)=");
scanf("%d",&nn);
printf("\n Number of trials =%d\n probability of succss=%4.2f",nt,p);
printf("\n Number the value of variates =%d \n",nn);
printf("\n values of variate x  :");
for(m=1;m<=nn;++m)
 {
x=0; n=nt;
for(i=1;i<=n;++i)
 {
y=rand()/32768.0;
if(y < p) x=x+1;
   }
   printf("%d",x);
   }
   getch();
   return 0;
}


