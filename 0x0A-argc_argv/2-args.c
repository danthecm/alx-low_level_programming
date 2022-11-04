#include <stdio.h>

/**
 * main - prints the contents of the argv[] argument
 * @argc: number of arguments passed
 * @argv: array containing the arguments passed
 * Return: o
 */

int main(int argc, char  *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
