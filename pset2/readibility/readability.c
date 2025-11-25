#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    const string text = get_string("Text: ");
    // uppercase and lowercase
    int letters = 0;
    // seperated by spaces
    float words = 0;
    // sentence can be defined by period, exclamation point or question mark
    int sentences = 0;
    for (int i = 0, length = strlen(text); i < length; i++)
    {
        if (islower(text[i]) || isupper(text[i]))
        {
            letters++;
        }
        else if (text[i] == ' ')
        {
            words++;
        }
        else if (text[i] == '!' || text[i] == '?' || text[i] == '.')
        {
            sentences++;
        }
    }
    words++;
    const float l = letters / words;
    const float s = sentences / words;
    int index = round(0.0588 * ((l) * 100) - 0.296 * ((s) * 100) - 15.8);
    // int index =
    //     round(0.0588 * ((l) * 100) - 0.296 * ((s) * 100) - 15.8);
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index == 1)
    {
        printf("Grade 1\n");
    }
    else if (index == 2)
    {
        printf("Grade 2\n");
    }
    else if (index == 3)
    {
        printf("Grade 3\n");
    }
    else if (index == 4)
    {
        printf("Grade 4\n");
    }
    else if (index == 5)
    {
        printf("Grade 5\n");
    }
    else if (index == 6)
    {
        printf("Grade 6\n");
    }
    else if (index == 7)
    {
        printf("Grade 7\n");
    }
    else if (index == 8)
    {
        printf("Grade 8\n");
    }
    else if (index == 9)
    {
        printf("Grade 9\n");
    }
    else if (index == 10)
    {
        printf("Grade 10\n");
    }
    else if (index == 11)
    {
        printf("Grade 11\n");
    }
    else if (index == 12)
    {
        printf("Grade 12\n");
    }
    else if (index == 13)
    {
        printf("Grade 13\n");
    }
    else if (index == 14)
    {
        printf("Grade 14\n");
    }
    else if (index == 15)
    {
        printf("Grade 15\n");
    }
    else
    {
        printf("Grade 16+\n");
    }
}
