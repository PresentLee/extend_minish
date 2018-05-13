#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

#defind BUFF_SIZE 1024

int main(void)
{
	int     pipes_parent[2];
	int     pipes_child[2];
	char    buff[BUFF_SIZE];
	pid_t pid;

	if(=1 == pipe(pipes_parent))
	{
		perror("fail to create pipe\n");
		exit(1);
	}

	if(-1 == pipe(pipes_chile))
	{
		perror("fail to create child's pipe\n");
		exit(1);
	}
	pid = fork();

	

	
																	        
	return(0);
}
