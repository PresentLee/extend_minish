#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dirent.h>

/* 
   1. get command from command prompt
   2. find env path of command file from /bin
   3. fork this process
   4. child exec the command
   5. print the result (at terminal)
*/

#define buf 1024

int main(int argc, char **argv, char **envp)
{

	DIR *dir_info;
	struct dirent *dir_entry;
	int fd;
	pid_t pid;
	char *path;

//	printf("%s \n",getenv("SHELL"));
//	printf("%s \n", argv[0]);
	printf("%s \n", argv[1]);

	if(-1 == putenv("PATH=/bin"))
	{
		printf("putenv failed \n");
	}
	path = getenv("PATH");
//	printf("%s \n", path);
	
	dir_info = opendir(path);

	if(NULL != dir_info)
	{
		while(dir_entry = readdir(dir_info))
		{
			if(strcmp(dir_entry->d_name,argv[1]) ==0)
			{
				printf("%s", dir_entry->d_name);
				printf("%s", getenv(dir_entry->d_name));
			} 
		//	printf("%s \n", dir_entry->d_name);
		}
		closedir(dir_info);
				
	}

	return 0;

}
