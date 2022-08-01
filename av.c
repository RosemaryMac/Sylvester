#include<stdio.h>

/**
 * main - prints all arguments without using ac
 * @args: number of arguments in av
 * @av: array of strings (arguments)
 * Return: Always 0.
 */
int main(int args, char *av[])
{
	int i = 0;

	for (i = 0; i < args; i++)
		printf("%s\n", av[i]);

	return (0);

}
