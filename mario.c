#include <cs50.h>
#include <stdio.h>

// Main function to make pyramid
int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    // Condition executes if n<1 or n>8
    while (n < 1 || n > 8);
    // MAIN loop for every iteration through n
    for (int i = 0; i < n; i++)
    {
        // 1st inner loop (sets k to n)
        for (int j = 0; j < n; j++)
        {
            // Condition 1 " " infront of left hand pyramid
            if (i + j < n - 1)
            {
                printf(" ");
            }
           
            // Condition 2 left pyramid
            else
            {
                printf("#");
            }
        }

        // Prints two spaces between pyramids
        printf("  ");

        // 2nd inner loop creates right hand pyramid (n + row number)
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}