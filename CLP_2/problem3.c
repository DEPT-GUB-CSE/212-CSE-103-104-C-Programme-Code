#include <stdio.h>

int main()
{

    int jack, jill;
    printf("enter jack's sptes : ");
    scanf("%d", &jack);
    printf("enter jill's sptes : ");
    scanf("%d", &jill);

    int sum = jack + jill, temp, digite_sum = 0;
    int i = 0;
    while (sum)
    { 
        temp = sum % 10;
        sum /= 10;
        digite_sum += temp;
        i++;
    }
    printf("there are %d digites\n", i);
    printf("Sum of that digites : %d \n", digite_sum);
    return 0;
}