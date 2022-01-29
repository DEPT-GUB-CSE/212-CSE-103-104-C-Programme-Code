/**
 * Write a program in C to find GCD of two numbers using recursion.
 * Test Data :
    Input 1st number: 10
    Input 2nd number: 50
    Expected Output :
    The GCD of 10 and 50 is: 10
*/

#include <stdio.h>

int GCD_of_tow(int num1, int num2)
{
    static int gcd;
    if (num1 < num2)
        gcd = num1;
    else
        gcd = num2;
    if (num1 % gcd == 0 && num2 % gcd == 0)
        return gcd;
    else
    {
        gcd++;
        GCD_of_tow(num1, num2);
    }
}

int main()
{
    int num1, num2;
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);
    printf("GCD of %d & %d is %d", num1, num2, GCD_of_tow(num1, num2));
    return 0;
}
