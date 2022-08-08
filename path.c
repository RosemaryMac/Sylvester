#include <stdio.h>
#include <dirent.h>

/**
 * main - Entry point
 * *d: pointer for directory entry
 * opendir: returns a pointer of DIR type
 */
int main(void)
{
	DIR *d = opendir(".");
	struct dirent *dir;

	if (d == NULL)
	{
		printf("Could not open current directory" );
		return (0);
	}
	while ((dir = readdir(d)) != NULL)
		printf("%s\n", dir->d_name);
	
	closedir(d); 
	return 0;
}
