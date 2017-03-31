#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
clrscr();
int a,b,r,i,m,n;
cout<<"Please enter the value of a and m:"<<endl;
cout<<"a=";
cin>>a;
cout<<endl;
cout<<"m=";
cin>>m;
cout<<"What is the seed number:";
cin>>r;
cout<<"How many random num:";
cin>>n;
cout<<endl;

for(i=1;i<=n;i++)
{int r1=(a*r)%m;
cout<<r1<<endl;
r=r1;
}
getch();
}