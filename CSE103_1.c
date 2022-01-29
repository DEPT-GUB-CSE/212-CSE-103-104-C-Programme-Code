#include <stdio.h>

void sum_of_all_digite(int student_id_array[9]);
void prime_count(int student_id_array[9]);
void digit_frequency(int student_id_array[9]);
void find_unique_digits(int student_id_array[9]);

int main()
{
    int student_id, Id_digits[9], i, digit;
    printf("Enter your ID: ");
    scanf("%d", &student_id);
    for (i = 8; i >= 0; i--)
    {
        digit = student_id % 10;
        student_id /= 10;
        Id_digits[i] = digit;
    }
    sum_of_all_digite(Id_digits);
    prime_count(Id_digits);
    digit_frequency(Id_digits);
    find_unique_digits(Id_digits);
    return 0;
}

void sum_of_all_digite(int student_id_array[9])
{
    int i, sum = 0;
    for (i = 0; i < 9; i++)
        sum += student_id_array[i];
    printf("Sum of all the digits: %d\n", sum);
}

void prime_count(int student_id_array[9])
{
    int i, count_of_prime_digit = 0;
    for (i = 0; i < 9; i++)
    {
        int digit = student_id_array[i];
        if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
        {
            count_of_prime_digit++;
        }
    }
    printf("Prime digits count: %d\n", count_of_prime_digit);
}
void digit_frequency(int student_id_array[9])
{
    int i, j;
    for (i = 0; i < 10; i++)
    {
        int count = 0;
        for (j = 0; j < 9; j++)
        {
            if (i == student_id_array[j])
                count++;
        }
        if (count)
            printf("%d occurs %d times\n", i, count);
    }
}

void find_unique_digits(int student_id_array[9])
{
    int i, j;
    printf("Unique digits are: ");
    for (i = 0; i < 10; i++)
    {
        int count = 0;
        for (j = 0; j < 9; j++)
        {
            if (i == student_id_array[j])
            {
                count++;
            }
        }
        if(count == 1){
            printf("%d ",i);
        }
    }
}