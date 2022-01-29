#include <stdio.h>
int main()
{
    int sum = 0, number, firstDigite, lastDigite;
    printf("Enter the number : ");
    scanf("%d", &number);
    lastDigite = number % 10;
    while (number >= 10)
    {
        number /= 10;
    }
    printf("%d", lastDigite);
    firstDigite = number;
    sum = firstDigite + lastDigite;
    printf("\n------------\nSum = %d \n-----------\n", sum);
    return 0;
}