#include<stdio.h>
int main()
{
    int time,speed;
    scanf("%d %d",&time,&speed);


    float cal=(time*speed)/(float)12;


    printf("%.3f\n",cal);

    return 0;



}
