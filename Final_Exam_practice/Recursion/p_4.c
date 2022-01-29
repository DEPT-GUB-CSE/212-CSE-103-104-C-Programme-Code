/**
 * Write a program in C to print the array elements using recursion.
 * -------------------
 * Test Data :
    Input the number of elements to be stored in the array :6
    Input 6 elements in the array :
    element - 0 : 2
    element - 1 : 4
    element - 2 : 6
    element - 3 : 8
    element - 4 : 10
    element - 5 : 12
    Expected Output :
    The elements in the array are : 2  4  6  8  10  12
*/
#include <stdio.h>

void print_arr(int arr[], int index, int len)
{
    if (index < len)
        printf("%d ", arr[index]);
    print_arr(arr, index + 1, len);
}
int main()
{
    int arr[100], len;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &len);
    int i;
    for (i = 0; i < len; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("The elements in the array are : ");
    print_arr(arr, 0, len);
    return 0;
}