#include <cs50.h>
#include <stdio.h>

//the program for change calculation
int main(void)
{
    int change;

//do while loop checks if the change value is more than 0

    do
    {
        change = get_int("Change owed: ");
    }
    while (change <= 0);

    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;

//while loops count the amount of qurters, dimes, nickels and pennies

        while (change >= 25)
    {
        quarters++;
        change -= 25;
    }

        while (change >= 10)
    {
        dimes++;
        change -= 10;
    }
        
        while (change >= 5)
    {
        nickels++;
        change -= 5;
    }
    
        while (change >= 1)
    {
        pennies++;
        change -= 1;
    }

    int amountOfCoins = quarters + dimes + nickels + pennies;
    printf("%i\n", amountOfCoins);
}
