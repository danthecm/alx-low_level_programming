#include <stdlib.h>
#include <stdio.h>
/**
 * main - put out
 *
 * Return: zero
 */
int main(void)
{
    int x;

    for (x = 'a'; x <= 'z'; x++)
    {
        if (x != 'q' && x != 'i')
        {
            putchar(x);
        }
    }
    putchar('\n');
    return (0);
}
