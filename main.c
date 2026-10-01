#include <stdio.h>

int main(void)
{
    int num;
    int answer = 59;
    int trials = 0;

    do
    {
        printf("Guess the number:");
        scanf("%d", &num);
        trials++;
        
        if(num > answer)
            printf("high!\n");
        else if(num < answer)
            printf("low!\n");

    } while(num != answer);

    printf("Congratulation! trials : %d\n", trials);

    return 0;
}