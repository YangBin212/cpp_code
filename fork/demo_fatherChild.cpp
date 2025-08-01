#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	pid_t pid;
	pid_t pid2;

	pid = getpid();
	printf("before fork pid is %d\n", pid);

	fork();

	pid2 = getpid();
	printf("after fork pid is %d\n", pid2);

	if(pid == pid2)
	{
		printf("this is father print, father pid is =%d\n", getpid());
	}else
	{
		printf("this is child print, child pid is =%d\n", getpid());
	}

	return 0;
}

