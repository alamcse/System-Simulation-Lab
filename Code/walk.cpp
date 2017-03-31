#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
clrscr();
int step,i,x_axis,y_axis;
float random_num;
char dir;
x_axis=0;
y_axis=0;
cout<<"Enter step numbers:";
cin>>step;
cout<<"Step    Random Number  Direction   X axis      Y axis";
cout<<"\n";
for(i=0;i<step;i++){
    random_num=random(10);
    if(random_num<=4){
       y_axis=y_axis+1;
       dir='F';
    }
if(random_num>=5 &&random_num<=7){
   x_axis=x_axis-1;
   dir='L';
}
if(random_num>=8 &&random_num<=9){
   x_axis=x_axis+1;
   dir='R';
}
cout<<" "<<i<<"  "<<random_num<<"  "<<dir<<"  "<<x_axis<<"  "<<y_axis<<"\n";
}
getch();
return 0;
}
