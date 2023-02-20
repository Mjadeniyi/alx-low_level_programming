#include <stdio.h>

/**
 * main - Prints lowercase alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphsbet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	int i;
	for (i = 0; i < 52; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
