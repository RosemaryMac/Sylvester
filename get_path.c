#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * Return: Always 0.
 */
int main()
{
	char *path = getenv("PATH");
	int length = strlen(path) -1;

	for(int i=0; i<=length; i++)
	{
		if (path[i] == ':')
			path[i] = '\n';
		printf("%c",path[i]);
	}

	printf("\n");
	return (0);
}
