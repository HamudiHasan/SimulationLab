#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <time.h>
#include<limits.h>
int randomNumber();
float getMin(int a[7]);
float calculateSD(float data[]);
float turn=1000;
int procedure (void);

int main(void)
{

    for(int i=10; i<=10000000;)
    {
        turn =i;
        printf("Numbers of Iteration : %.f\n",turn);
        procedure ();
        i=i*10;
    }

}
int procedure (void)
{
    srand (time(NULL));
    int dice;
    double result;

    float sum;
    int numberCount[7]= {0,0,0,0,0,0};
    for(int i =0 ; i<turn; i++)
    {

        dice = randomNumber();
        //printf("%d ",dice);
        numberCount[dice-1]= numberCount[dice-1]+1;
    }
    //printf(" \n");
    for(int i=0 ; i<6; i++)
    {
        //printf(" %d -> %d\n",i+1,numberCount[i]);
    }

    //printf(" \n");
    for(int i=0 ; i<6; i++)
    {
        result = (numberCount[i]/turn);
        sum+=result;

        // printf(" %d -> %f\n",i+1,result);
    }

    // printf("Sum = %f\n",sum);


    float arr[7] ;
    for(int i=0 ; i<6; i++)
    {
        arr[i]=numberCount[i]/turn;
    }
    //printf("MIN = %f\n",getMin(numberCount)/turn);
    printf("Standard Daviation : %f\n",calculateSD(arr));
}

int randomNumber()
{
    return rand()%6+1;
}
float getMin(int a[])
{
    float minimum = INT_MAX;

    for(int i =0 ; i<6; i++)
    {
        if(a[i]<minimum)
        {
            minimum = a[i];
        }
    }
    return minimum;
}

float calculateSD(float data[])
{
    float sum =0.0 , mean ,sd =0.0;
    int i ;
    for( i=0; i<6; i++)
    {
        sum+= data[i];
    }

    mean = sum/6;

    for(i=0; i<6; ++i)
        sd += pow(data[i]-mean,2);
    return sqrt(sd/6);
}
