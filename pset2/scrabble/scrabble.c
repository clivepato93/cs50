#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    const int values[26] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                            1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    string player1 = get_string("Player 1: ");
    string player2 = get_string("Player 2: ");
    int player1Score = 0;
    int player2Score = 0;
    for (int i = 0, length = strlen(player1); i < length; i++)
    {
        if (islower(player1[i]))
        {
            const int letter = player1[i] - 97;
            player1Score += values[letter];
        }
        else if (isupper(player1[i]))
        {
            const int letter = player1[i] - 65;
            player1Score += values[letter];
        }
    }
    for (int i = 0, length = strlen(player2); i < length; i++)
    {
        if (islower(player2[i]))
        {
            const int letter = player2[i] - 97;
            player2Score += values[letter];
        }
        else if (isupper(player2[i]))
        {
            const int letter = player2[i] - 65;
            player2Score += values[letter];
        }
    }
    if (player1Score > player2Score)
    {
        printf("Player 1 Wins!\n");
    }

    else if (player1Score < player2Score)
    {
        printf("Player 2 Wins!\n");
    }

    else
    {
        printf("Tie!\n");
    }
}
