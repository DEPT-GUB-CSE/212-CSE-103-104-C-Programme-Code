/**
 * Write a program in C to print first 50 natural numbers using recursion.
 */

#include <stdio.h>

int printer(int num)
{
    if (num <= 50)
    {
        printf("%d ", num);
        printer(num + 1);
    }
}

int main(int num)
{
    printer(1);
    return 0;
}