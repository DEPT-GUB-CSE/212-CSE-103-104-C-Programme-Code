#include <stdio.h>
#include <math.h>
int convert(int decimal)
{
    int binary = 0, remiber, i = 1;
    while (decimal != 0)
    {
        remiber = decimal % 2;
        decimal /= 2;
        binary += remiber * i;
        i *= 10;
        printf("{\n\tdeci: %d,\n\t reminder:%d,\n\t %d,\n}\n", decimal, remiber, i);
    }
    return binary;
}
int main()
{
    int n, bin;
    printf("write the Decimal number: ");
    scanf("%d", &n);
    bin = convert(n);
    printf(" Binary number: %d", bin);
    return 0;
}
