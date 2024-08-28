#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char data[100];
    int i, ch;
    int valid;

    while (1)
    {
        printf("Enter a Str: ");
        //fgets(data, sizeof(data), stdin);
        scanf("%s",&data);

        
        data[strcspn(data, "\n")] = '\0';

       
        valid = 1;
        for (i = 0; i < strlen(data); i++)
        {
            if (!((data[i] >= 'A' && data[i] <= 'Z') || (data[i] >= 'a' && data[i] <= 'z') || data[i] == ' '))
            {
                valid = 0;
                break;
            }
        }

        if (valid)
        {
            for (i = 0; i < strlen(data); i++)
            {
                if (data[i] >= 'A' && data[i] <= 'Z')
                {
                    printf("%c", 'Z' - (data[i] - 'A'));
                }
                else if (data[i] >= 'a' && data[i] <= 'z')
                {
                    printf("%c", 'z' - (data[i] - 'a'));
                }
                else if (data[i] == ' ')
                {
                    printf(" "); 
                    printf("Space , enter a character");
                }
            }
            printf("\n");
        }
        else
        {
            printf("Enter whole sequence in characters.\n");
        }

        printf("Do you want to continue? Press 1, else 0: ");
        scanf("%d", &ch);
        getchar();  // Consume the newline character left in the buffer
        if (ch != 1)
        {
            break;
        }
    }

    return 0;
}
