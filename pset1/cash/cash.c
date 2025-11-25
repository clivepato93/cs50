#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int money;
    do
    {
        money = get_int("Change Owed: ");
    }
    while (money < 0);
    int totalCoins = 0;
    int pennies = 1;
    int nickels = 5;
    int dimes = 10;
    int quarters = 25;

    while (money > 0)
    {
        if (money >= quarters)
        {
            money -= quarters;
            totalCoins++;
        }
        else if (money >= dimes)
        {
            money -= dimes;
            totalCoins++;
        }
        else if (money >= nickels)
        {
            money -= nickels;
            totalCoins++;
        }
        else
        {

            money -= pennies;
            totalCoins++;
        }
    }
    printf("%i\n", totalCoins);
}
