#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream.h>


int main()
{
	clrscr();
	int i,j,n;
	int h=0;
	int t=0;
	int r;
	//int g=0;
	//int l=0;
	int m1,m2;
	start:

	cout<<"How many times u want to flip coin:";
	cin>>n;

	randomize();           //generate random number
	for(i=0;i<n;i++)  //n times coin flip
	{

		r=rand()%10; //random number between 0 to 9
		if(r<5)  //head between 0 to 4
		{
			cout<<r<<":head\n";
			h++;
		}
		else  //tail between 5 to 9
		{       cout<<r<<":tail\n";
			t++;
		}


	}

	cout<<"\nNumber of Head:"<<h<<"\nNumber of Tail:"<<t;


		m1=h-t;   //head-tail difference
		m2=t-h;  //tail-head difference

		if((m1==3||m2==3)&&(n<8)) //wining condition
		{

			cout<<"\nyou won:"<<8-n<<"Tk\n";
		}
		else if((m1==3||m2==3)&&(n>8)) //losing condition
		{
			cout<<"\nyou lose:"<<n-8<<"Tk\n";
		}
		else   //no result found because head-tail difference isn't 3
		{
		    cout<<"\n No Result Found.\n";

		}



	 cout<<"\n\nWould you like to continue?(y/n)";
char ch;
cin>>ch;

if((ch=='y')||(ch=='Y'))
 {
  goto start;
 }
else
 {exit;}




	getch();
	return 0;
}




