#include <stdio.h>

int facto(int n)
{
    if (n >= 0)
    {
        if (n == 0)
            return 1;
        return n * facto(n - 1);
    }
}

int main()
{

    int low_lmt, up_lmt, i;
    printf("Input lower limit: ");
    scanf("%d", &low_lmt);
    printf("Input upper limit: ");
    scanf("%d", &up_lmt);

    for (i = low_lmt; i <= up_lmt; i++)
    {
        int num = i, rem, sum = 0;
        if (num < 10)
            sum = facto(num);
        else
        {
            while (num)
            {
                rem = num % 10;
                num /= 10;
                sum += facto(rem);
            }
        }
        if (sum == i)
            printf("%d\n", i);
    }
    return 0;
}