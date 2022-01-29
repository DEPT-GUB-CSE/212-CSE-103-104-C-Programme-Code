#include <stdio.h>
int factorial(int num);
int main()
{
    int input, sum = 0;
    printf("\n\ninput a number : ");
    scanf("%d", &input);
    for (int i = 1; i <= input; i++)
        sum += factorial(i);
    printf("|*|  sum : %d\n", sum);
    return 0;
}
int factorial(int num)
{
    if (num != 0)
        return num * factorial(num - 1);
}