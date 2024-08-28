#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{

    char data[100];
    int i;
    printf("Enter a Str : ");
    scanf("%s", &data);

    for (i = 0; i < strlen(data); i++)
    {
        printf("%c", 'Z' - (int)(data[i] - 'A'));
    }

    return 0;
}
