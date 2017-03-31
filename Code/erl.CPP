#include <iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
    int i,j,k,m,nn;
    float x,r,mean;
    cout<< " the value of mean =";
    cin>>mean;
    cout<<"the value of parameter k=";
    cin>>k;
    cout<<"namber of random variates to be genarated=";
    cin>>nn;
    cout<< mean,k,nn;
    cout<< "values of variate x:";
    for(m=1;m<=nn;++m)
        {
        float prod=1;

    for(i=1; i<=k;++i)
    {
        r=rand()/32768.0;
        prod = prod*r;
    }
    x=mean*(-1./k)*log(prod);
    cout<<x<<endl;
    }
    getch();
    return 0;
}
