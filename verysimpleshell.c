#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - Entry point
 * argc: Argument count
 * argv: Argument vector
 * envp: An array of pointers to environment variables
 */
int main(int argc, char *argv[], char *envp[])
{
	pid_t child;
	char *command[16], *tok, *lineptr = NULL;
	size_t i, n;
	int status;

	while (1)
	{
		printf("$ ");
		if (getline(&lineptr, &n, stdin) == -1)
			break;
		tok = strtok(lineptr, " \t\n\r");
		 for (i = 0; i < 16 && tok != NULL; i++)
			 {
				  command[i] = tok;
				 tok = strtok(NULL, " \t\n\r");
			 }
		command[i] = NULL;
		child = fork();
		if (child == 0)
		{
			if (execve(command[0], command, envp))
			{
				perror("execve");
				exit(EXIT_FAILURE);
			}
		}
		if (child > 0)
			wait(&status);
	}
	putchar('\n');
	free(lineptr);
	exit(status);
}
