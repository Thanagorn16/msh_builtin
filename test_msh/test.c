#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

int	main()
{
	DIR	*dir;
	struct dirent *entry;

	dir = opendir("."); //open the current directory
	if (dir == NULL)
	{
		perror("error opendir");
		return (1);
	}
	while ((entry = readdir(dir)) != NULL)
	{
		printf("%s\n", entry->d_name);
	}
	closedir(dir);
	return (0);
}