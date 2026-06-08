//1.小王：
#include <iostream>
using namespace std;
int main()
{
    double a=100;
    int n=0;
    scanf("%d",&n);
    double m=n%5;
    if(0<m<3)
    {
        double b=0.0008*(n-m)+100+m*0.002;
        printf("%f\n",b);
    }
    else
    {
        double k=(n-m)*0.0008+100+0.006-(m-3)*0.001;
        printf("%f\n",k);
    }
    return 0;
}

//2.小明：
#include <iostream>
using namespace std;
int main()
{
    double a=100;
    int n=0;
    scanf("%d",&n);
    double m=0;
    m=100+0.001*n;
    printf("%f",m);
    return 0;
}
