#include <iostream>

using namespace std;

int main()
{
    int password[20]={0};
    printf("请输入密码:>");
    scanf("%s",password);
        printf("请确认密码(Y/N);>");
    int cle=0;
    while((cle=getchar())!='\n')
    {
        ;
    }
    int ch=getchar();
    if (ch=='Y')
        printf("确认成功\n");
        else printf("确认失败\n");
    return 0;
}
