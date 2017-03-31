#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
clrscr();
int r1,r2,r3,i,m,n;
cout<<"Please enter the value of r1 and r2 and m:"<<endl;
cout<<"r1=";
cin>>r1;
cout<<endl;
cout<<"r2=";
cin>>r2;
cout<<endl;
cout<<"m=";
cin>>m;
cout<<"How many random num:";
cin>>n;
cout<<endl;


for(i=0;i<n;i++)
{r3=(r1+r2)%m;
cout<<r3<<endl;
r1=r2;
r2=r3;

}
getch();



}