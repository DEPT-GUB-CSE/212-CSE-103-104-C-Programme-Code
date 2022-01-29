#include <stdio.h>

int main()
{
    int num, temp_num, rem, final_num=0;
    printf("Enter A number :");
    scanf("%d", &num);
    temp_num = num;
    while (temp_num)
    {
        rem = temp_num % 10;
        temp_num /= 10;
        final_num = final_num * 10 + rem;
    }
    if(final_num==num)
        printf("This number is palindrome");
    else
        printf("This number is not palindrome");

    return 0;
}