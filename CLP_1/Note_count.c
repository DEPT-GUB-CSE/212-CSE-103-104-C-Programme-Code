#include <stdio.h>

int main()
{
    int taka, note_1000, note_500, note_200, note_100, note_50, note_20, note_10, note_5, note_2, note_1;
    printf("Amount of Taka : ");
    scanf("%d", &taka);
    while (taka)
    {
        if (taka >= 1000)
        {
            note_1000 = taka / 1000;
            taka -= 1000 * note_1000;
            printf("\t1000 taka: %d notes\n", note_1000);
        }
        else if (taka >= 500)
        {
            note_500 = taka / 500;
            taka -= 500 * note_500;
            printf("\t500 taka: %d notes\n", note_500);
        }
        else if (taka >= 200)
        {
            note_200 = taka / 200;
            taka -= 200 * note_200;
            printf("\t200 taka: %d notes\n", note_200);
        }
        else if (taka >= 100)
        {
            note_100 = taka / 100;
            taka -= 100 * note_100;
            printf("\t100 taka: %d notes\n", note_100);
        }
        else if (taka >= 50)
        {
            note_50 = taka / 50;
            taka -= 50 * note_50;
            printf("\t50 taka: %d notes\n", note_50);
        }
        else if (taka >= 20)
        {
            note_20 = taka / 20;
            taka -= 20 * note_20;
            printf("\t20 taka: %d notes\n", note_20);
        }
        else if (taka >= 10)
        {
            note_10 = taka / 10;
            taka -= 10 * note_10;
            printf("\t10 taka: %d notes\n", note_10);
        }
        else if (taka >= 5)
        {
            note_5 = taka / 5;
            taka -= 5 * note_5;
            printf("\t5 taka: %d notes\n", note_5);
        }
        else if (taka >= 2)
        {
            note_2 = taka / 2;
            taka -= 2 * note_2;
            printf("\t2 taka: %d notes\n", note_2);
        }
        else
        {
            note_1 = 1;
            printf("\t1 taka: %d notes\n", note_1);
            break;
        }
    }

    return 0;
}