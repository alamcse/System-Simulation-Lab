#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 int main()
 {
 int i,j,k,n,nn;
 float rnd,y;
 n=4;
 float x[]={1,5,2.5,4.0,5.5,6.0};
 float p[]={0.0,0.1,0.25,0.65,0.90,1.0};
 printf("\n x[i]=     ");
 for(i=0;i<=n;++i) {printf("%6.2f",x[i]); }
 printf("\n p[i]=");
 for(i=0;i<=n+1;++i) {printf("%6.2f",p[i]); }
 printf("\n Number of variates to be generateds (nn)=");
 scanf("%d",&nn);
 printf("\n values of variates x:=\n");
 for(k=1;k<=nn;++k) {
 rnd=rand ()/32768.0;
 for(i=0; i<=n+1;++i) {
 j=i+1;
 if((rnd >p[i] ) && (rnd <=p[j]))  y=x[i];
 }
 printf("%5.1f",y);
 }
 getch();
 return 0;
}