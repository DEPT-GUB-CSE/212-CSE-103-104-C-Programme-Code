/*
 * C program to input real numbers and find the mean, variance
 * and standard deviation
 */
#include <stdio.h>
#include <math.h>
 
void bar(int line){
    printf("\n\n");
    while (line-->0)
        printf("**||--||--||--||--||**\n");
    printf("\n\n");
    
}


int main()
{
    float x[5];
    int  i, n;
    float average, variance, std_deviation, sum = 0, sum1 = 0;
    bar(2);
    printf("What is the numbers length? \n Answear :");
    scanf("%d", &n);
    printf("Please %d real numbers \n", n);
    for (i = 0; i < n; i++)
        scanf("%f", &x[i]);
    for (i = 0; i < n; i++)
        sum = sum + x[i];
    average = sum / n;
    for (i = 0; i < n; i++)
        sum1 = sum1 + pow((x[i] - average), 2);
    variance = sum1 / n;
    std_deviation = sqrt(variance);
    bar(2);
    printf("|*| \t Mean \t\t\t %.2f\n", average);
    printf("|*| \t variance \t\t %.2f\n", variance);
    printf("|*| \t Standard deviation \t %.2f\n", std_deviation);
    bar(2);
    return 0;
}