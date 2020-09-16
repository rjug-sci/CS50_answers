#include <cs50.h>
#include <stdio.h>

//promts user for name input and prints hello statement with user input
int main(void)
{
    string name = get_string("What is your name?\n");
    printf("hello, %s\n", name);
}