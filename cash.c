#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_knickels(int cents);
int calculate_pennies(int cents);
int main(void)
{
    // prompt user for change owed in cents
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    // calculate amount of quarters
    int quarters = calculate_quarters(cents);

    // subtract from cents
    cents = cents - (quarters * 25);

    // calculate amount of dimes
    int dimes = calculate_dimes(cents);

    // subtract from cents
    cents = cents - (dimes * 10);

    // calculate amount of nickels
    int knickels = calculate_knickels(cents);

    // subtract from cents
    cents = cents - (knickels * 5);

    // calculate amount of pennies
    int pennies = calculate_pennies(cents);

    // subtract from cents
    cents = cents - pennies;

    // sum amount of coins
    int coins = quarters + dimes + knickels + pennies;

    // print sum
    printf("%i\n", coins);
}

int calculate_quarters(int cents)
{
    // calculate amount of quarters
    int quarters = cents / 25;

    return quarters;
}

int calculate_dimes(int cents)
{
    // calculate amount of dimes
    int dimes = cents / 10;
    return dimes;
}

int calculate_knickels(int cents)
{
    // calculate amount of knickels
    int knickels = cents / 5;
    return knickels;
}

int calculate_pennies(int cents)
{
    // calculate amount of pennies
    int pennies = cents / 1;
    return pennies;
}
