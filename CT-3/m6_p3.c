#include <stdio.h>

void bar(int line)
{
    printf("\n\n");
    while (line-- > 0)
        printf("**||--||--||--||--||**\n");
    printf("\n\n");
}

int main()
{
    int array_len, numbers[10];
    int i, j, k;
    bar(2);
    printf("Enter array length : ");
    scanf("%d", &array_len);
    printf("Enter %d numbers :-\n =", array_len);
    for (i = 1; i <= array_len; i++)
        scanf("%d", &numbers[i]);
    for (j = 0; j <= array_len; j++)
    {
        int present_num = numbers[j];
        int count = 0;
        for (k = 0; k <= array_len; k++)
        {
            if (present_num == numbers[k])
            {
                count++;
                printf("%d's frequency is : %d\n", present_num, count);
            }
        }
    }
}