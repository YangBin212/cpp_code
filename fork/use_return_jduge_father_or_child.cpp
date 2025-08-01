#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>

int main()
{
	pid_t pid;
	printf("father: id = %d\n",getpid());

	pid = fork();

	if(pid >0)
	{
		printf("this is father print, pid = %d\n", getpid());
	}
	else if (pid == 0)
	{
		printf("this is child print, child pid = %d\n", getpid());
	}

	return 0;
}
