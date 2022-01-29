/**
 * Write a program in C to get the largest element of an array using recursion.
 * Input the number of elements to be stored in the array :5
    Input 5 elements in the array :
    element - 0 : 5
    element - 1 : 10
    element - 2 : 15
    element - 3 : 20
    element - 4 : 25
    Expected Output :

    Largest element of an array is: 25
*/
#include <stdio.h>
int len;
int get_largest(int arr[])
{
    static int i = 0, max;
    if (i < len)
    {
        if (max < arr[i])
            max = arr[i];
        i++;
        get_largest(arr);
    }
    return max;
}

int main()
{
    int arr[100];
    printf("Enter number of element : ");
    scanf("%d", &len);
    int i;
    for (i = 0; i < len; i++)
    {
        printf(" element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("largest number form this array is : %d", get_largest(arr));
    return 0;
}