#include <stdio.h>
 
int main()
{
    char name[20]="Sazzad Hossain";
    int id=212902073;
    char section='A';
    char GPA[10]={5,5};
    FILE *file;
    file = fopen("./data/file1.txt", "w");
    fprintf(file, "%s\n", name);
    fprintf(file, "%d\n", id);
    fprintf(file, "%c\n", section);
    int i = 0;
    while (i < 10)
    {
        fprintf(file, "%s\n", GPA[i]);
        i++;
    }
     fclose(file);
    file = fopen("./file1.txt", "r");
    while (!feof(file))
    {
        char readed[30];
        fgets(readed, 30, file);
        if (feof(file))
            break;
        printf("%s", readed);
    }
 
    fclose(file);
    return 0;
}
