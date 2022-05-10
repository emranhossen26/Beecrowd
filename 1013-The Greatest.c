#include<stdio.h>
int main()
{
    int a,b,c,result;
    scanf("%d %d %d",&a,&b,&c);
    result=(a+b+abs(a-b))/2;
    result=(c+result+abs(c-result))/2;

    printf("%d eh o maior",result);

    return 0;
}
//Learn:abs is Modulus function(||).
