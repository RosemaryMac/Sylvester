#include <stdio.h>

/**
 * main -Entry point
 * @argc: argument count
 * @argv: argument vector
 * @envp: environment variables pointer
 * Return: Always 0.
 */
int main(int argc, char *argv[], char *envp[])
{
	int i;

	for (i = 0; envp[i] != NULL; i++)
		printf("\n%s", envp[i]);
	getchar();
	return (0);
}