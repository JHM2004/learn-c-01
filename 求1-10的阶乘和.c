#include <stdio.h>
double fact(int n)
{
    int m=1;
    int i=0;
    for(i=1;i<=n;i++)
    {
        m=m*i;
    }
    return m;
}
int main(void)
{
    int i=0;
    double sum=0;
    for(i=1;i<=10;i++)
        sum=sum+fact(i);
    printf("1!+2!+3!+4!+5!+6!+7!+8!+9!+10!=%f\n",sum);
    return 0;
}