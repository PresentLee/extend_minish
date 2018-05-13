#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dirent.h>


int main(int argc, char **argv, char **envp)
{

	DIR *dir_info;
	struct dirent *dir_entry;
	int fd;
	pid_t pid;

	dir_info = opendir("/bin");
	if(NULL != dir_info)
	{
		while(dir_entry = readdir(dir_info))
		{
			if(strchr(dir_entry->d_name,argv[0]) != NULL)
			{
				printf("%s", getenv(dir_entry->d_name));
			}
			closedir(dir_info);
		}
				
	}

	return 0;

}
