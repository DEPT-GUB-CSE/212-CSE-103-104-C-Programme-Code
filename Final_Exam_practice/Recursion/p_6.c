/**
 * Write a program in C to find the sum of digits of a number using recursion.
 * ---------------
 * Test Data :
    Input any number to find sum of digits: 25
    Expected Output :

    The Sum of digits of 25 = 7
*/

#include <stdio.h>
int sum_of_digits(int num)
{
    static int sum = 0, rem;
    if (num != 0)
    {
        rem = num % 10;
        num /= 10;
        sum += rem;
        sum_of_digits(num);
    }
    else
        return sum;
}
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("The sum of digits of %d = %d", num, sum_of_digits(num));
    return 0;
}