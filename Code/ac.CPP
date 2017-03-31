#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
clrscr();
int b,r,i,m,n;
cout<<"Please enter the value of b and m:"<<endl;

cout<<endl;
cout<<"b=";
cin>>b;
cout<<endl;
cout<<"m=";
cin>>m;

cout<<"What is the seed number:";
cin>>r;
cout<<"How many random numbers:";
cin>>n;
cout<<endl;

for(i=1;i<=n;i++)
{int r1=(r+b)%m;
cout<<r1<<endl;
r=r1;
}
getch();
}