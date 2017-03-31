#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main()
  {
  int i,j,m,nn;
  float t,sum,x,mue,sigma;
  printf("\n Enter the values of mue");
  scanf("%f",&mue);
  printf("\n Enter the values of sigma");
  scanf("%f",&sigma);
  printf("\n Enter the values of variables to be generated nn=");
  scanf("%d",&nn);
  printf("\n mue=%4.2f sigma=%4.2f  nn=%4d",mue,sigma,nn);
  printf("\n values of variable x:");
  printf("\n");
  for(m=1;m<=nn;++m) {
  sum=0;
  for(i=1;i<=12;++i) {
  x=rand()/32768.0 ;
  sum=sum+x;
  }
  t=mue+sigma*(sum-6);
  printf(" %6.2f",t);

}
getch();
  return 0;
}

