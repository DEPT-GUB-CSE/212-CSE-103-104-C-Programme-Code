#include <stdio.h>
#include <stdbool.h>
int main()
{
    int input_number, num_2, i, j;
    printf("Enter a number : ");
    scanf("%d", &input_number);
    for (i = input_number; i >= 1; i--)
    {
        printf("%d", i);
        j = i;
        while (j)
        {
            printf("*");
            while ()
            {
                /* code */
            }
            
            j--;
        }
        printf("\n");
    }

    return 0;
}