#include <cs50.h>
#include <stdio.h>
#include <math.h>

//prompt user for card number

int main(void)
{

    // Do while loop to check user input
    long card;
    do
    {
        card = get_long("What is your card number?: \n")
    }
    while(n <= 0);

    //loop over card number
    int counter = 0;
    card_copy = card;
    while(card_copy > 0)
    {
        card_copy = card_copy/10;
        counter++;
    }

    //check if number is valid
    if(counter != 13 && counter != 15 && counter != 16)
    {
        printf("INVALID CARD\n");
    }

    //Get every other digit
    int total = 0;
    while (card_copy > 0)
    {
        last_digit = card_copy % 10; //return last digit 12345 = 5
        number = (last_digit / 10); //card with final digit removed 1234
        total += (number * 2); //multiply by 2 and add to total (4*2)
        last_digit / 10;
        last_digit / 10;
    }

    //Get digits removed and add to total
    int other_total = 0;
    while (card > 0)
    {
        leftover_digit = card % 10; //get last number
        other_total += leftover_digit; //add number to total
        card / 10; //remove that digit
        card / 10; //remove next digit
    }

    card_total = total + other_total;

    if (digit1 == 4 && counter >= 13 && counter <= 16)
    {
        printf("VISA\n");
    }
    else if (first_two_digits >= 51 && first_two_digits <= 55 && num_digits == 16)
    {
        printf("MASTERCARD\n");
    }
    else if ((first_two_digits == 34 || first_two_digits == 37) && num_digits == 15)
    {
        printf("AMEX\n");
    }
}
