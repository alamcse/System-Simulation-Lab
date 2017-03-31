#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
clrscr();
int x,i,nn,m,s,k;
float p,r;
cout<<"Enter the value of p(<1.0):";
cin>>p;
cout<<endl<<"Enter the value of k(>=1):";
cin>>k;
cout<<"Value of parameter k= "<<k<<endl;
cout<<"Probability of success in a trial = "<<p<<endl;
cout<<"Number of variable to be generated :";
cin>>nn;
cout<<endl<<"Values of the variates x:";
for(i=1;i<=nn;++i){
  x=0;
  s=0;
while(s<k){
   r=rand()/32768.0;
if(r<=p){s=s+1;}
   x=x+1;
  }
cout<<x<<" ";
 }
getch();
}
