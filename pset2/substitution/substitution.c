#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    char letters[26] = {};
    char upperCaseKey[26] = {};
    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        if (islower(argv[1][i]))
        {
            letters[argv[1][i] - 97] = 1;
        }
        else if (isupper(argv[1][i]))
        {
            letters[argv[1][i] - 65] = 1;
        }
        upperCaseKey[i]=toupper(argv[1][i]);
    }

    for (int i = 0; i < 26; i++)
    {
        if (letters[i] != 1)
        {
            printf("invalid key\n");
            return 1;
        }
    }

    string plainText = get_string("plaintext: ");
    printf("ciphertext: ");
    for (int i = 0, length = strlen(plainText); i < length; i++)
    {
        if (islower(plainText[i]))
        {

            printf("%c", tolower(upperCaseKey[(plainText[i]-97)]));
        }
        else if (isupper(plainText[i]))
        {

            printf("%c", upperCaseKey[(plainText[i]-65)]);
        }
        else
        {
            printf("%c", plainText[i]);
        }
    }
    printf("\n");
}
