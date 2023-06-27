cat 0-main.c
#include "main.c"
#include <stdio.c

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void reset_to_98(int *n);)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98
