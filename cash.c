#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // Prompt user for float input and checks for negative number
    float cash;
    int quarter, dime, nickel, penny, coins, leftover, tempn, cents;
    do
    {
        cash = get_float("Change owed: \n");
    }
    while (cash <= 0);

    // Convert dollar value to cents *100
    cents = (int) round(cash * 100);

    //set up variables for coins
    quarter = 25;
    dime = 10;
    nickel = 5;
    penny = 1;
    leftover = 0;
    coins = 0;

    // 1.If statements checks if cents > coin type
    // 2.Generates leftover value from % of coin type
    // 3.Temporary number generated to store cents - leftover
    // 4.Counts coins used so far and adds to coins variable
    // 5.If any cents remain they get put back into cents variable

    // Condition to check if quarters could be used
    if (cents >= quarter)
    {
        leftover = cents % quarter;
        tempn = cents - leftover;
        coins = coins + (tempn / quarter);
        cents = leftover;
    }

    // Condition to check if dimes could be used
    if (cents >= dime)
    {
        leftover = cents % dime;
        tempn = cents - leftover;
        coins = coins + (tempn / dime);
        cents = leftover;
    }

    // Condition to check if nickels could be used
    if (cents >= nickel)
    {
        leftover = cents % nickel;
        tempn = cents - leftover;
        coins = coins + (tempn / nickel);
        cents = leftover;
    }

    // Condition to check if pennies could be used
    if (cents >= penny)
    {
        leftover = cents % penny;
        tempn = cents - leftover;
        coins = coins + (tempn / penny);
        cents = leftover;
    }
    printf("Number of coins needed: %i\n", coins);
}