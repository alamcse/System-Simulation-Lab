#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
 clrscr();
 long int i,x,y,z,seed;
 int n;
 cout<<"What is the seed number:";
 cin>>seed;
 cout<<"How many rabdom numbers:";
 cin>>n;

 for(i=1;i<=n;i++)
 {
  y=(seed*seed/100.0);
  z=(y/10000.0);

  x=((y/10000.0-z)*10000.0);
  seed=x;
  cout<<x<<endl;
 }
 getch();

}