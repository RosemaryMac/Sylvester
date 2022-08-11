#include <stdio.h>

/**
 * main -Entry point
 * @argc: argument count
 * @argv: argument vector
 * @environ: environment variables pointer
 * Return: Always 0.
 */
extern char **environ;

int main()
{
	char **s = environ;
	
	for (; *s; s++)
	{
		printf("\n%s", *s);
	}
	return (0);
}
