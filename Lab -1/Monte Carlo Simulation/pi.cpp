#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <time.h>
#include<limits.h>
void calculatePi(int iterationNumber);
int main (void)
{
      time_t t;
    srand((unsigned)time(&t));
    for(int i =0; i<20;i++){
         calculatePi(100);
    }


}

void calculatePi(int iterationNumber)
{


    int i,count=0;
    double x,y,z,pi;

    for(i=0; i<iterationNumber; i++)
    {
        x= (double) rand ()/RAND_MAX;
        y= (double) rand ()/RAND_MAX;

     //   printf("%f",x);

        z= (x*x)+y*y;
        if(z<=1){
          count++;
        }

    }
    pi = (double) count/iterationNumber*4;


    //printf("Number of iteration : %d\n",iterationNumber);
    printf("Pi = %f\n",pi);
}
