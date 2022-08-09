#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @environ: environment characters pointer
 * @argc: Argument count
 * @argv: Argument vector
 * @envp: Environment variables pointer
 */
extern char **environ;
int main(int argc, const char *argv[], const char *envp[])
{
	printf("environ: %p\n", environ);
	printf("envp: %p\n", envp);

	setenv("NEW_VAR", "new_value", 1);
	puts("---Added NEW_VAR---");

	printf("environ: %p\n", environ);
	printf("envp: %p\n", envp);

	exit (EXIT_SUCCESS);
}
