/**
 *  Write a program in C to count the digits of a given number using recursion.
 * -------------------------
 * Input a number : 50
    Expected Output :
    The number of digits in the number is :  2
 */

#include <stdio.h>

int digits(int num)
{
    static int count = 0;
    if (num != 0)
    {
        num /= 10;
        count++;
        digits(num);
    }
    else
        return count;
}

int main()
{
    int num;
    printf("Input a number : ");
    scanf("%d", &num);
    printf("The number of digits in the number is : %d", digits(num));
    return 0;
}