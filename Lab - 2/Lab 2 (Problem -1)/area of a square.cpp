#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <time.h>
#include<limits.h>
double getRandomNumber();
double getArea(double iterationNumber );
int main (void)
{
    double iterationNumber=10;

    for(int i =0; i<=5; i++)
    {
        printf("%d) For %f iteration , area is : %f\n",i+1,iterationNumber,getArea(iterationNumber));
        iterationNumber = iterationNumber*10;
    }
}

double getRandomNumber()
{
    // from web
    return -1.0+2.0*((double)rand())/(double)RAND_MAX;
}
double getArea(double iterationNumber )
{
    time_t t;
    srand(time(NULL));

    double area;
    int i,cut=0;
    double x,y,z,pi=3.14159,count=0.0;

    for(i=0; i<iterationNumber; i++)
    {
        x=  getRandomNumber();
        y= getRandomNumber();

        // Check bound condition and count the area
        if(x> 0 && y>0 && x+y<=1)
            count++;
        else if(x< 0 && y<0 && x+y<=-1)
            count ++;
        else if(x<0 && y>0 && y-x<=1)
            count++;
        else if(x>0 && y <0 && x-y>=1)
            count++;
    }

    // provide by sir :p
    return (double)(count/iterationNumber)*4.0;

}
