#include <stdio.h>

int main(void)
{
    int digit_1;
    int digit_2;
    int result = scanf("%d %d", &digit_1, &digit_2);
    int res = digit_1 + digit_2;
    printf("answer is: %d", res);
    return 0;
}