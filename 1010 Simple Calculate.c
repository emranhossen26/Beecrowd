#include<stdio.h>
int main()
{
    int product1,unit1,product2,unit2;
    float price1,price2,cal;
    scanf("%d %d %f",&product1,&unit1,&price1);
    scanf("%d %d %f",&product2,&unit2,&price2);

    cal=(unit1*price1)+(unit2*price2);

    printf("VALOR A PAGAR: R$ %.2f\n",cal);
    return 0;
}
