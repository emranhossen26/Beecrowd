#include<stdio.h>
int main()
{
    int n,minutes,c1,i,seconds,hours;
    scanf("%d",&n);


    hours=n/3600;


    if(hours==0)
    {
        minutes=n/60;
    }


    else
    {
        for(i=0; i<5; i++)
        {
            c1= n-(hours*3600);
            minutes=c1/60;
        }
    }


    if(hours==0)
    {
        seconds=n-(minutes*60);
    }



    else
    {
        seconds=c1-(minutes*60);
    }



    printf("%d:%d:%d\n",hours,minutes,seconds);

    return 0;

}
