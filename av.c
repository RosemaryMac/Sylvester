#include<stdio.h>

/**
 * main - prints all arguments without using ac
 * @ac: number of arguments in av
 * @av: array of strings (arguments)
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int i;

	for (i = 0; i < ac; i++)
		printf("av[%2s]: %s\n", av[i]);

	return (0);

}
