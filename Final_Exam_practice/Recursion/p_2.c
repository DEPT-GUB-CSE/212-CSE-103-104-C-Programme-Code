/**
 * Write a program in C to calculate the sum of numbers from 1 to n using recursion.
 */

#include <stdio.h>
int get_sum(int num)
{
    if (num == 0)
        return 0;
    return num + get_sum(num - 1);
}
int main()
{
    int num, sum = 0;
    printf("Input the last number of the range starting from 1 : ");
    scanf("%d", &num);
    sum = get_sum(num);
    printf("The sum of numbers from 1 to %d : %d", num, sum);
    return 0;
}