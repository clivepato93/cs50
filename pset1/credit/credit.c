#include <cs50.h>
#include <stdio.h>
#include <string.h>

// int main(void)
// {
//     string number = get_string("Number: ");
//     int length = strlen(number);
//     int sum = 0;
//     int index = length-1;
//     int check = 1;
//     int first = number[0] - 48;
//     int second = number[1] - 48;
//     if(index%2==1){
//         check =0;
//     }
//     while (index>=0)
//     {
//         int num = number[index] - 48;
//         if (index % 2 == check)
//         {
//             num += num;
//         }
//         if (num > 9)
//         {
//             num = (num / 10) + (num % 10);
//         }
//         sum += num;
//         index--;
//     }
//     if ((first == 4 && (length == 13 || length == 16)) && sum % 10 == 0)
//     {
//         printf("VISA\n");
//     }
//     else if ((first == 5 && second >= 1 && second <= 5) && length == 16 && sum % 10 == 0)
//     {
//         printf("MASTERCARD\n");
//     }
//     else if ((first == 3 && (second == 4 || second == 7)) && length == 15 && sum % 10 == 0)
//     {
//         printf("AMEX\n");
//     }
//     else
//     {
//         printf("INVALID\n");
//     }
// }

int main(void)
{
    long number = get_long("Number: ");
    int counter = 0;
    int sum = 0;
    int prefix;

    while (number > 0)
    {
        if(number>=100){
            prefix = number/10;
        }
        int num = number % 10;

        if (counter % 2 == 1)
        {
            num += num;
        }
        if (num > 9)
        {
            num = (num / 10) + (num % 10);
        }
        sum += num;
        counter++;
        number /= 10;
    }
    if ((prefix /10== 4 && (counter == 13 || counter == 16)) && sum % 10 == 0)
    {
        printf("VISA\n");
    }
    else if (( prefix >= 51 && prefix <= 55) && counter == 16 && sum % 10 == 0)
    {
        printf("MASTERCARD\n");
    }
    else if ((prefix == 34 || prefix == 37) && counter == 15 && sum % 10 == 0)
    {
        printf("AMEX\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
