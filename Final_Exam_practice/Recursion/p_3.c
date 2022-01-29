/**
 * Write a program in C to Print Fibonacci Series using recursion.
 * -------------------
 * Test Data :
    Input number of terms for the Series (< 20) : 10

    Expected Output :
    Input number of terms for the Series (< 20) : 10
    The Series are :
    0   1  1  2  3  5  8  13  21  34  55
 * -------------------
*/
#include <stdio.h>

int fibonacci(int num)
{
    switch (num)
    {
    case 0:
        return 0;
        break;
    case 1:
        return 1;
        break;
    default:
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

int main()
{
    int limit;
    printf("Input number of terms for the Series (< 20) : ");
    scanf("%d", &limit);
    printf("The Series is : \n");
    int i = 0;
    while (i <= limit)
    {
        int fibo_ele = fibonacci(i);
        printf("%d ", fibo_ele);
        i++;
    }

    return 0;
}