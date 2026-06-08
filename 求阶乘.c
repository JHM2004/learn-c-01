#include <iostream>

using namespace std;

int main()
{
    int i=0;
    int n=0;
    double sum=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum*i;
    printf("%d!=%lf\n",n,sum);

    return 0;
}
