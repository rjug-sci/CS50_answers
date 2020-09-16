#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    // Promt user for string
    string s = get_string("Text: \n");

    // Count text
    int words = 1;
    int letters = 0;
    int sentences = 0;

    // Initialise loop
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // Count all characters except NULL
        if (isalpha(s[i]) != 0)
        {
            //Add to character count
            letters++;
        }

        // Count all words
        if (s[i] == ' ')
        {
            // Add word to word count
            words++;
        }

        // Count all sentences
        if (s[i] == '!' || s[i] == '?' || s[i] == '.')
        {
            // Add sentence to sentence count
            sentences++;
        }
    }
    // Print out results
    printf("letters:%i \n", letters);
    printf("words:%i \n", words);
    printf("sentences:%i \n", sentences);

    // Apply Luhns Algorithmn
    float index = 0.0588 * (100 * (float) letters / (float) words) - 0.296 * (100 * (float) sentences / (float) words) - 15.8;


    //Print out result of Luhns Algoritmn
    if (index >= 16)
    {
        printf("Grade 16+\n");
    }

    if (index < 16 && index >= 0)
    {
        printf("Grade %i\n", (int) round(index));
    }

    if (index <= 0)
    {
        printf("Before Grade 1\n");
    }
}