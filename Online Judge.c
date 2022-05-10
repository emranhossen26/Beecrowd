#include<stdio.h>
int main()
{
    int n,c1,c2,r1,r2,c3,c4,r3,c5,r4,r5,c6,r6,c7;



        scanf("%d",&n);
        printf("%d\n",n);


    c1=n/100;
    if(c1>=0)
    {
        printf("%d nota(s) de R$ 100,00\n",c1);

    }

    c2= n-(c1*100);
    r1=c2/50;

    if(r1>=0)
    {

        printf("%d nota(s) de R$ 50,00\n",r1);

    }


    c3= c2-(r1*50);
    r2=c3/20;

    if(r2>=0)
    {

        printf("%d nota(s) de R$ 20,00\n",r2);

    }


    c4=c3-(r2*20);
    r3=c4/10;

    if(r3>=0)
    {

        printf("%d nota(s) de R$ 10,00\n",r3);

    }



    c5=c4-(r3*10);
    r4=c5/5;

    if(r4>=0)
    {

        printf("%d nota(s) de R$ 5,00\n",r4);

    }

    c6=c5-(r4*5);
    r5=c6/2;

    if(r5>=0)
    {

        printf("%d nota(s) de R$ 2,00\n",r5);

    }

    c7=c6-(r5*2);
    r6=c7/1;

    if(r6>=0)
    {

        printf("%d nota(s) de R$ 1,00\n",r6);

    }


    return 0;

}
