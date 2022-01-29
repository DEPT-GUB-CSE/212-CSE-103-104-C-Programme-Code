#include <stdio.h>

int main()
{
    int product1, product2, product3, product4, i = 4;
    int result;
    printf("Enter four products prices: ");
    scanf("%d %d %d %d", &product1, &product2, &product3, &product4);
    printf("%d", product1);
    if (product1 < product2 && product2 < product3 && product3 < product4)
    {
        result=product2;
    }
    else
    {
        
    }

    return 0;
}