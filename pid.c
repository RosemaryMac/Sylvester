#include <stdio.h>
#include <unistd.h>
/**
 * main - PID
 * 
 * Return: Always 0.
 */
int main(void)
{
	pid_t r_pid;

	r_pid = getpid();
	printf("%u\n", r_pid);
	return (0);
}
