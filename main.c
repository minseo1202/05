#include <stdio.h>

int main(void)
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a > 0)
    {
        printf("양수입니다.\n");
    }
    else if(a < 0)
    {
        printf("음수입니다.\n");
    }
    else
    {
        printf("0 입니다.\n");
    }

    return 0;
}