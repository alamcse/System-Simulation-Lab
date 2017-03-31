#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<string.h>
int main()
{
clrscr();
int stan_dev_x,stan_dev_y,no_of_rnn,no_of_hit=0,no_of_miss=0,strike_rate,no_of_strike=1;
float x_rnn[10],y_rnn[10];
float x_co,y_co;
char result[5],hit[5]="Hit",miss[5]="Miss";
cout<<"Enter standard deviation of X & Y: ";
cin>>stan_dev_x>>stan_dev_y;
cout<<"\nHow many bombs u want to drop: ";
cin>>no_of_rnn;
cout<<"\nEnter Random Normal Number(RNN) for X & Y: ";
for(int i=0;i<no_of_rnn;i++)
  {
cin>>x_rnn[i]>>y_rnn[i];
  }
clrscr();
cout<<"\n";
textcolor(12);
cprintf("                         Submitted by Group No.: 4\n");
cout<<"\n";
textcolor(9);
cprintf("\n                     --Simulation of Bombing Problem--");
cout<<"\n        -----------------------------------------------------------\n";
cout.width(15);
cout<<"Strike";
cout.width(10);
cout<<"RNN";
cout.width(10);
cout<<"X";
cout.width(10);
cout<<"RNN";
cout.width(10);
cout<<"Y";
cout.width(10);
cout<<"Result";
cout<<"\n        -----------------------------------------------------------\n";
for(i=0;i<no_of_rnn;i++)
  {
x_co=stan_dev_x*(x_rnn[i]);
y_co=stan_dev_y*(y_rnn[i]);
if((x_co<stan_dev_x) && (x_co>-(stan_dev_x)) && (y_co<stan_dev_y) && (y_co>-(stan_dev_y)))
      {
strcpy(result,hit);
no_of_hit++;
      }
else
      {
	strcpy(result,miss);
	no_of_miss++;
      }
cout.width(15);
cout<<no_of_strike;
no_of_strike++;
cout.width(10);
cout.precision(2);
cout<<x_rnn[i];
cout.precision(2);
cout.width(10);
cout<<x_co;
cout.precision(2);
cout.width(10);
cout<<y_rnn[i];
cout.precision(2);
cout.width(10);
cout<<y_co;
cout.width(10);
cout<<result<<"\n";
}
cout<<"        -----------------------------------------------------------\n";
strike_rate=(no_of_hit*100)/no_of_rnn;
cout<<"\n\n		      Number of Hits:               "<<no_of_hit;
cout<<"\n		      Number of Misses:             "<<no_of_miss;
cout<<"\n		      %Number of strikes on target: "<<strike_rate<<"%";
getch();
return 0;
}



