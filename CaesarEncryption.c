#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

// TYPE IN THE TEXT AND THEN THE KEY FOR ENCRYPTION WHEN RUNNING
void encrypt_text(char* text, int key);



int main(int argc, char* argv[])
{
    // check if user inputs 1 key
    if (argc != 2) {
        printf("Type, ./caesar key\n");
        return 1;

    }

    // make sure that the key is only digits
    for (int n = 0; n < strlen(argv[1]); n++)
    {
        if (!isdigit(argv[1][n])) {
            printf("KEY HAS TO BE DIGITS");
            return 1;
        }

    }
    // Converting key, to integer
    int key = atoi(argv[1]);
    char text[100];
    printf("Text: ");
    fgets(text, sizeof(text), stdin);

    encrypt_text(text, key);

    return 0;
}

// encrypting function
void encrypt_text(char* text, int key)
{
    printf("Ciphertext: ");
    for (int k = 0; k < strlen(text); k++)
    {
        if (isalpha(text[k])) {
            char base = isupper(text[k]) ? 'A' : 'a';
            printf("%c", (text[k] - base + key) % 26 + base);
        } else {
            printf("%c", text[k]);
        }
    }
    printf("\n");
}
