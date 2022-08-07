#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h> 
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 
 */
int main(void)
{
	pid_t pid;
	pid = fork();
	
	if(pid==0)
	{
		printf("It is the child process and pid is %d\n", getpid());
		
		char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};

		 printf("Before execve\n");
		 if (execve(argv[0], argv, NULL) == -1)
		 {
			  perror("Error:");
		 }
		  printf("After execve\n");
		  exit(0);
	}
	else if(pid > 0)
	{
		printf("It is the parent process and pid is %d\n", getppid());
		
		int status;
		wait(&status);
		printf("Child is reaped\n");
	}
	else
	{
		printf("Error in forking..\n");
		exit(EXIT_FAILURE);
	}
	return 0;
}
