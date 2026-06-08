#include<stdio.h>

int my_strlen(char* arr)
{
    int count = 0;
    while (*arr != '\0')
    {
        count++;
        arr++;
    }
    return count;
}

void turn_updown(char*arr)
{
    char left  = *arr;
    int len = my_strlen(arr);
    char tem = *arr;
    *arr = *(arr + len - 1);
    *(arr + len - 1) = '\0';
    if (my_strlen(arr + 1) >= 2)
    {
        turn_updown(arr + 1);
    }
    *(arr + len - 1) = tem;
}

int main()
{
    char arr[] = "abcdefgh";
    turn_updown(arr);
    printf("%s\n", arr);
    return 0;
}