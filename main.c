#include <stdio.h>

int main(void)
{
    int a,b;
    char op;

    printf("enter the calculation : ");
    scanf("%d %c %d", &a, &op, &b);

    switch(op)
    {
        case '+':
            printf("%d + %d = %d\n", a, b, a+b);
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, a-b);
            break;
        case '*':
            printf("%d * %d = %d\n", a, b, a*b);
            break;
        case '/':
            if(b != 0)
                printf("%d / %d = %f\n", a, b, (float)a/b);
            else
                printf("지원하지 않는 연산자입니다.\n");
            break;
        default:
            printf("지원하지 않는 연산자입니다.\n");
    }
}