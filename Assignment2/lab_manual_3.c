#include <stdio.h>
int main()
{
    int n, i, series = 1, sum = 0;
    printf("Input a number  : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d", series);
        if (i < n)
        {
            printf("+ ");
        }
        sum += series;
        series = (series * 10) + 1;
    }
    printf("\nThe Sum is : %d\n", sum);
    return 0;
}