#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    char output[100];

    printf("Enter a string: ");
    scanf("%s", &input); 

    for (int i = 0; input[i] != '\0'; i++) 
    {
        if (input[i] >= 'A' && input[i] <= 'Z') 
        {
            output[i] = 'Z' - (input[i] - 'A');
        }
        else if 
        (input[i] >= 'a' && input[i] <= 'z') {
            output[i] = 'z' - (input[i] - 'a');
        } 
        else 
        {
            output[i] = input[i];  
        }
    }
   // output[strlen(input)] = '\0'; 
    printf("Mirrored string: %s\n", output);

    return 0;
}
