#include<stdio.h>
int main()
{
    int n,h;
    float p;
    double ts;
    scanf("%d %d %f",&n,&h,&p);
    ts=h*p;
    printf("NUMBER = %d\n",n);
    printf("SALARY = U$ %.2lf\n",ts);
    return 0;

}
