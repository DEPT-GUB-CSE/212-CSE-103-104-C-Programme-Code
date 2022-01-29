#include <stdio.h>
#include <string.h>
int main()
{
    char input_str[50], char_input;
    int position;
    printf("String Input: ");
    gets(input_str);
    printf("Character Input: ");
    scanf("%c", &char_input);
    printf("Position: ");
    scanf("%d", &position);
    position--;
    input_str[position] = char_input;
    printf("%s", input_str);

    return 0;
}

/**
 * Hello World
 * Hekllo World
 */